// C++ code
//
int Waterlevel = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  Waterlevel = 0.01723 * readUltrasonicDistance(3, 2);
  Serial.println(Waterlevel);
  if (Waterlevel > 200) {
    digitalWrite(8, HIGH);
    digitalWrite(10, LOW);
  }
  if (Waterlevel < 100) {
    digitalWrite(8, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(6, HIGH);
  }
  digitalWrite(6, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}