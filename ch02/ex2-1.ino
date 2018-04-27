// 예제 2-1 아두이노 코드의 주석

/*
  여기에 있는 모든 문구는 아두이노 컴파일러에서 무시한다.
*/

int led = 13;

void setup() {
  // 이 문구 또한 무시한다.
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH); // 이 문구 역시 무시한다.
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
