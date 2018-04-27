// 예제 3-3 시리얼 통신이 포함된 밝기 조절 예제

int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;

  if (brightness == 0 || brightness == 255) {
    Serial.print('Brightness is at');
    Serial.print(brightness);
    Serial.println('. Switching directions.');
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
