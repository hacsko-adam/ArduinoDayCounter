void setup() {
  // put your setup code here, to run once:
  int i;
  for (i = 7; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int i;
    for (i = 7; i <= 13; i++){
      digitalWrite(i, HIGH);
      delay(1000);
      digitalWrite(i, LOW);
    }
}
