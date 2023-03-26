#include "MAX30105.h" //請先安裝sparkfun的MAX3010x程式庫
#include <Wire.h>

MAX30105 particleSensor;

void setup(){
  Serial.begin(115200);
  if (particleSensor.begin() == false)  {
    Serial.println("MAX30105 was not found. Please check wiring/power. ");
    while (1);
  }
  particleSensor.setup(); //Configure sensor. Use 6.4mA for LED drive
}

void loop(){
  Serial.print(particleSensor.getRed());
  Serial.print(", ");
  Serial.println(particleSensor.getIR());
}

