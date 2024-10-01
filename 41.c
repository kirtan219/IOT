#define TRIG_PIN 3
#define ECHO_PIN 2

long duration;
int distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT); 
  pinMode(ECHO_PIN, INPUT);  

  Serial.begin(9600);  // Start serial communication
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

  // Print the distance for monitoring
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(100);  // Short delay before next loop
}
