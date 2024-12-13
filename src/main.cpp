#include <Arduino.h>
#define LED_PIN1 23
#define LED_PIN2 19
#define LED_PIN3 18
#define LED_PIN4 5
#define LED_PIN5 17
#define LED_PIN6 16
#define LED_PIN7 4
#define LED_PIN8 0
#define GPIO 36

void setup() {
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
  pinMode(LED_PIN5, OUTPUT);
  pinMode(LED_PIN6, OUTPUT);
  pinMode(LED_PIN7, OUTPUT);
  pinMode(LED_PIN8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(GPIO);
  Serial.println(sensorValue);
  delay(500);

  if (sensorValue >= 0 && sensorValue <= 500) {
    digitalWrite(LED_PIN1, HIGH); 
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
  } 
  else if (sensorValue >= 501 && sensorValue <= 1000) {
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, LOW);
    digitalWrite(LED_PIN5, LOW);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
  } 
  else if(sensorValue >= 1001 && sensorValue <= 2000) { 
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, LOW);
    digitalWrite(LED_PIN7, LOW);
    digitalWrite(LED_PIN8, LOW);
  }
  else {
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    digitalWrite(LED_PIN5, HIGH);
    digitalWrite(LED_PIN6, HIGH);
    digitalWrite(LED_PIN7, HIGH);
    digitalWrite(LED_PIN8, HIGH);
  }
}
