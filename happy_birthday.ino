int x;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop() {
  sound(1500, 1500, 200);
  d(20);
  sound(1500, 1500, 200);
  sound(1400, 1400, 200);
  sound(1400, 1400, 200);
  d(10);
  sound(1700, 1700, 200);
  sound(1700, 1700, 200);
  d(10);
  sound(1300, 1100, 150);
  sound(1300, 1100, 150);
  sound(1300, 1100, 150);
  d(10);
  sound(1300, 1200, 200);
  sound(1300, 1200, 200);
  sound(1300, 1200, 200);

  d(200);

  sound(1500, 1500, 200);
  d(20);
  sound(1500, 1500, 200);
  sound(1400, 1400, 200);
  sound(1400, 1400, 200);
  d(10);
  sound(1700, 1700, 200);
  sound(1700, 1700, 200);
  d(10);
  sound(1300, 1050, 150);
  sound(1300, 1050, 150);
  sound(1300, 1050, 150);
  sound(1300, 1050, 150);
  d(10);
  sound(1300, 1200, 200);
  sound(1300, 1200, 200);
  sound(1300, 1200, 200);

  d(200);

  sound(1500, 1500, 200);
  d(20);
  sound(1500, 1500, 200);
  sound(1400, 1400, 200);
  sound(1400, 1400, 200);
  d(10);
  sound(1700, 1700, 200);
  sound(1700, 1700, 200);
  d(10);
  sound(1300, 1050, 150);
  sound(1300, 1050, 150);
  sound(1300, 1050, 150);
  d(10);
  sound(1400, 1300, 150);
  sound(1400, 1300, 150);
  sound(1400, 1300, 150);
  d(10);
  sound(1500, 1500, 200);
  sound(1500, 1500, 200);
  sound(1500, 1500, 200);
  d(200);
  sound(1200, 1200, 150);
  sound(1200, 1200, 150);
  sound(1200, 1200, 150);
  d(10);
  sound(1200, 1200, 150);
  sound(1200, 1200, 150);
  sound(1600, 1600, 150);
  sound(1600, 1600, 150);
  sound(1600, 1600, 150);
  sound(1800, 1800, 150);
  sound(1800, 1800, 150);
  sound(1800, 1800, 150);
  sound(1500, 1500, 150);
  sound(1500, 1500, 150);
  sound(1500, 1500, 150);
  sound(2000, 2100, 150);
  sound(2000, 2100, 150);
  sound(2000, 2100, 150);
  sound(2000, 2100, 150);
  sound(2000, 2100, 150);
  d(1000);
}


void sound(int sound1, int sound2, int delayTime) {
  for (int i = 0; i < delayTime - 50; i++) {
    x = analogRead(10);
    digitalWrite(9, LOW);
    delayMicroseconds(delayTime);
    digitalWrite(9, HIGH);
    delayMicroseconds(sound2);
  }
}

void d(int x) {
  delay(x);
}
