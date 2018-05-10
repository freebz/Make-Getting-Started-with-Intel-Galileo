// 예제 6-2 ifconfig의 출력을 보기 위해 시스템 콜 사용

void setup() {
  Serial.begin(9600);
}

void loop() {
  system("ifconfig &> /dev/ttyGS0");
  delay(3000);
}
