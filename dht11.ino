#include "DHTesp.h"

const int pinDHT = 15;
DHTesp dht;

void setup() {
  Serial.begin(115200);
  dht.setup(pinDHT, DHTesp::DHT11);
  delay(2000);
}

void loop() {
  TempAndHumidity data = dht.getTempAndHumidity();

  Serial.print("Estado: ");
  Serial.println(dht.getStatusString());

  Serial.print("Temperatura: ");
  Serial.println(data.temperature);

  Serial.print("Humedad: ");
  Serial.println(data.humidity);

  delay(2000);
}