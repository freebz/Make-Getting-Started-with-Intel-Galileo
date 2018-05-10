// 예제 6-1 시스템 콜을 사용해 서버에 연결하기

void setup() {
  Serial.begin(9600);
}

void looop() {
  if (Serial.available()) {
    Serial.read();
    system("curl http://makezine.com &> dev/ttyGS0");
  }
}
