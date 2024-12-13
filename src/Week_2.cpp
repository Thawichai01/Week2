/*week2
#include <Arduino.h>

// กำหนดพอร์ต
const int sw1 = 15;
const int rad1 = 23;
const int green1 = 19;
const int yellow1 = 18;
const int sw2 = 2;
const int rad2 = 5;
const int green2 = 17;
const int yellow2 = 16;

// ตัวแปรสถานะ
bool isBlinking = false;

// โปรโตไทป์ของฟังก์ชัน (ประกาศไว้ก่อน)
void blinkAllLights();
void trafficLightSequence();

void setup() {
  // กำหนดพอร์ตทั้งหมดเป็น OUTPUT หรือ INPUT
  pinMode(rad1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(rad2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);

  // ปิดไฟทั้งหมดในตอนเริ่มต้น
  digitalWrite(rad1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(rad2, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, LOW);
}

void loop() {
  // ตรวจจับการกดปุ่ม sw1
  if (digitalRead(sw1) == HIGH) {
    delay(100); // ป้องกันการกดซ้ำ
    isBlinking = !isBlinking; // สลับโหมดระหว่างไฟจราจรปกติและกระพริบ
  }

  if (isBlinking) {
    blinkAllLights(); // โหมดไฟกระพริบ
  } else {
    trafficLightSequence(); // โหมดไฟจราจรปกติ
  }
}

void trafficLightSequence() {
  // ลำดับไฟจราจร
  // ไฟแดงแยก 1 และไฟเขียวแยก 2
  digitalWrite(rad1, HIGH);
  digitalWrite(green2, HIGH);
  delay(2000);

  // ไฟเหลืองทั้งสองแยก
  digitalWrite(rad1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(2000);

  // ไฟเขียวแยก 1 และไฟแดงแยก 2
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(rad2, HIGH);
  delay(2000);

  // ไฟเหลืองทั้งสองแยก
  digitalWrite(green1, LOW);
  digitalWrite(rad2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(2000);

  // ปิดไฟทั้งหมด
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
}

void blinkAllLights() {
  // โหมดกระพริบไฟ
  const int blinkDelay = 500; // ระยะเวลาในการกระพริบ

  // เปิดไฟทั้งหมด
  digitalWrite(rad1, HIGH);
  digitalWrite(green1, HIGH);
  digitalWrite(yellow1, HIGH);
  digitalWrite(rad2, HIGH);
  digitalWrite(yellow2, HIGH);
  digitalWrite(green2, HIGH);
  delay(blinkDelay);

  // ปิดไฟทั้งหมด
  digitalWrite(rad1, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(rad2, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(green2, LOW);
  delay(blinkDelay);}
  */