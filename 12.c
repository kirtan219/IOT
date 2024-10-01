void setup() {
  // put your setup code here, to run once:
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    delay(500);

    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    delay(1000);

    digitalWrite(0, LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2, HIGH);
    delay(500);
    
  int t = 1;
  while (t < 5){
    t = t+1;
    digitalWrite(0, HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2, HIGH);
    delay(300);

    digitalWrite(0, LOW);
    digitalWrite(1,HIGH);
    digitalWrite(2, HIGH);
    delay(300);
  }

}
