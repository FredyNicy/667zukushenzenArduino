// я первый сделал коментарий))
// troubla 100%

#include <DHT.h>
#include <SPI.h>
#include <SD.h>

#define mech 2 // mech rele
#define sens 6 // dht sensor
#define white 7 // white led
#define green 8 // green led
#define red 9 // red led

DHT dht(sens, DHT11);

float humidity;
float temperature;

void setup() {
  pinMode(white, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(mech, OUTPUT);
  digitalWrite(white, HIGH);
  dht.begin();
  delay(1000);
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (humidity > 65.00){
    digitalWrite(green, LOW);
    digitalWrite(mech, HIGH);
  }else{
    digitalWrite(mech, LOW);
  }

  if (humidity < 60.00){
    digitalWrite(red, HIGH);
  }else{
    digitalWrite(red, LOW);
  }

  if (humidity > 60.00 && humidity < 65.00){
    digitalWrite(green, HIGH);
  }else{
    digitalWrite(green, LOW);
  }
  
}
/второй коментарий
/третий коментарий
