// 예제 4-2 기본 아날로그 입력 스케치

const int potentiometerPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorReading = analogRead(otentiometerPin);
  int displayValue = map(sensorReading, 0, 1023, 0, 100);
  Serial.print("Potentiometer is at");
  Serial.println("%.");
  delay(500);
}
