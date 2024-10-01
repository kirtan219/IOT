#define TRIG_PIN 3
#define ECHO_PIN 2
#define LED_PIN 13

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);  
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  // Send a 10µs pulse to the TRIG pin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Read the ECHO pin and calculate distance
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;  // Convert to cm

  // Control LED based on distance
  if (distance <= 25) {
    digitalWrite(LED_PIN, HIGH);    // Turn on LED if distance is <= 25 cm
    delay(300);                     // Blink LED
    digitalWrite(LED_PIN, LOW);
    delay(300);
  } else {
    digitalWrite(LED_PIN, LOW);     // Turn off LED if no object within range
  }

  delay(100);  // Short delay before next loop
}
