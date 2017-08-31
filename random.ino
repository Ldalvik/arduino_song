int x;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop() {
 //sound(Random());
  Random(1,5);
}

int Random(int _min, int _max){
 // int _array[];
  Serial.println(_max);
  for(_min<_max+1; _max--;){
    Serial.println(_max);
  }
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
