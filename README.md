# 💧 Monitoramento de Nível de Caixa d’Água com IoT

Este projeto tem como objetivo monitorar o nível da água de uma caixa d’água utilizando uma solução baseada em IoT. A proposta está alinhada ao Objetivo de Desenvolvimento Sustentável (ODS) nº 6 da ONU, que visa assegurar a disponibilidade e a gestão sustentável da água e do saneamento para todos.

---

## Status do Projeto
🚧 Etapa 4 em andamento – este repositório será atualizado com vídeo, medições e códigos finais até o prazo de entrega (27/05/2025).  
✅ Etapas 1, 2 e 3 já concluídas.

---

##  Tecnologias e Ferramentas Utilizadas

- Arduino Uno (simulado no Node-RED)
- Sensor Ultrassônico HC-SR04 (simulado)
- Módulo Relé (simulado)
- Node-RED (fluxo visual e lógica)
- MQTT (broker Mosquitto)
- Fritzing (diagrama de montagem)
- Draw.io (fluxograma)

---

## Funcionamento do Sistema

O projeto simula um sistema de monitoramento de nível de água em que:

- Um sensor de nível (simulado) envia dados sobre a distância da água.
- Esses dados são transmitidos via protocolo MQTT.
- Um nó interruptor (switch) simula a lógica de decisão do Arduino.
- Caso o nível esteja abaixo do limite, um relé é ativado e aciona uma bomba (simulada por um LED).

🔁 A lógica é toda implementada no Node-RED e não requer Arduino físico, mas simula seu comportamento real.

---

## Estrutura do Repositório
 iot-monitoramento-nivel-agua ├── README.md ├── /codigo │ ├── node-red-fluxo.json │ └── simulador-arduino.txt ├── /imagens │ ├── diagrama-fritzing.png │ ├── fluxograma.png │ └── print-node-red.png ├── /documentacao │ └── Projeto_IoT_Etapa3.pdf

 
---

## Etapas Concluídas

- ✅ Etapa 1 – Abstract, Resumo, Introdução e Referências
- ✅ Etapa 2 – Materiais e Métodos com detalhamento dos componentes
- ✅ Etapa 3 – Diagrama de montagem com Fritzing e fluxograma de funcionamento

---

##  Etapa 4 – Em Desenvolvimento

Em breve este repositório será atualizado com:

- [ ] Vídeo demonstrativo no YouTube
- [ ] Medições de tempo com tabela e gráficos
- [ ] Capturas de tela da comunicação com o broker MQTT
- [ ] Código final completo
- [ ] Seção de Resultados e Conclusão no artigo
- [ ] Link para o artigo final em PDF

---

##  Links Úteis

- [ODS 6 – ONU Brasil](https://odsbrasil.gov.br/objetivo/objetivo?n=6)
- [Fritzing – Editor de Diagramas](https://fritzing.org/)
- [MQTT.org – Protocolo](http://mqtt.org/)
- [Node-RED](https://nodered.org/)

---

##  Licença

Projeto acadêmico – uso permitido para fins educacionais.  
Disciplina: Objetos Inteligentes Conectados – 2025  
Aluno: *[Seu nome]*  


