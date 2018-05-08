// 예제 4-1 기본 디지털 입력 스케치

int switchInputPin = 2;

void setup() {
  pinMode(switchInputPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int switchState = digitalRead(switchInputPin);
  if (switchState == HIGH) {
    Serial.println("The switch is on!");
  }
  else {
    Serial.println("The switch is off!");
  }
  delay(500);
}
