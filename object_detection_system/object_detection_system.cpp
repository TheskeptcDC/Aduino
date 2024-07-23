#define transmitter 8
#define receiver 7
#define buzzer 4  // Pin connected to the buzzer (optional)

void setup() {
  pinMode(transmitter, OUTPUT);
  pinMode(receiver, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  long distance;
  long duration;
  digitalWrite(transmitter, LOW);  
  delayMicroseconds(2); 
  digitalWrite(transmitter, HIGH);
  delayMicroseconds(10); 
  digitalWrite(transmitter, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;  // distance in cent meters 


  if (distance < 10) {  // If the object is closer than 10 cm
    digitalWrite(buzzer, HIGH);  // Turn on the buzzer
  } else {
    digitalWrite(buzzer, LOW);  // Turn off the buzzer
  }

  delay(1000);  // Wait for a second before taking the next reading
}
