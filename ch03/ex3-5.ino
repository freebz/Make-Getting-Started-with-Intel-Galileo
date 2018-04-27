// 예제 3-5 텔넷 활성화와 IP 출력

void setup() {
  system("telnetd -l /bin/sh");
}

void loop() {
  system("ifconfig eth0 > /dev/ttyGS0");
  delay(5000);
}
