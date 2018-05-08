// 예제 5-1 시리얼 데이터 정보 수신 예제

#define LED 13

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == 'h') {
      digitalWrite(LED, HIGH);
    }
    if (c == 'l') {
      digitalWrite(LED, LOW);
    }
  }
}
