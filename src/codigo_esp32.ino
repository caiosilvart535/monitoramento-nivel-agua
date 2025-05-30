#include <WiFi.h>
#include <PubSubClient.h>

// Wi-Fi do Wokwi
const char* ssid = "Wokwi-GUEST";
const char* password = "";

// Broker MQTT alternativo
const char* mqtt_server = "test.mosquitto.org";
const int mqtt_port = 1883;
const char* mqtt_topic = "projeto/ultrassonico/distancia";

WiFiClient espClient;
PubSubClient client(espClient);

// Pinos do sensor
const int trigPin = 5;
const int echoPin = 18;

void setup_wifi() {
  Serial.begin(115200);
  Serial.println("Conectando ao Wi-Fi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWi-Fi conectado!");
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Conectando ao MQTT...");
    if (client.connect("ESP32Client123")) {
      Serial.println("Conectado ao broker MQTT!");
    } else {
      Serial.print("Falha: ");
      Serial.print(client.state());
      Serial.println(" - tentando novamente em 5 segundos");
      delay(5000);
    }
  }
}

void setup() {
  setup_wifi();
  client.setServer(mqtt_server, mqtt_port);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  // Medição do sensor ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distância medida: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Envia ao MQTT
  char msg[10];
  dtostrf(distance, 1, 2, msg);
  bool ok = client.publish(mqtt_topic, msg);

  Serial.println(ok ? "Publicado com sucesso!" : "Erro ao publicar!");

  delay(1000);
}


