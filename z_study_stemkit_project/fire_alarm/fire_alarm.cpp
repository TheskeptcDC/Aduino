#define receiver 7
#define buzzer 4  // Pin connected to the buzzer (optional)

void setup() {
  pinMode(receiver, INPUT);
  pinMode(buzzer, OUTPUT);
  int isFire = 0;

}

void loop() {
    if (isFirie > 0) {  // If the object is closer than 10 cm
    digitalWrite(buzzer, HIGH);  // Turn on the buzzer
  } else {
    digitalWrite(buzzer, LOW);  // Turn off the buzzer
  }

  delay(1000);  // Wait for a second before taking the next reading
}
