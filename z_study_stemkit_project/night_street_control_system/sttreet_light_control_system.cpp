// street lights must go off dururing the day ..and go on during the night 
// we can take these conditions by "sensing" when its dark and when its bright
// in our case we will use a light dependant diode 


int photo_sensor = A0;    // Pin connected to the LDR
int relay = 10;   // Pin connected to the relay module

void setup() {
  pinMode(relay, OUTPUT);
  digitalWrite(relay, LOW);  // Start with the street light off
  
}

void loop() {
  int light_state = analogRead(photo_sensor);  // Read the LDR value
  

  if (light_state < 500) {  // Threshold value, you can change it 
    digitalWrite(relay, HIGH);  //we  Turn on the street light
  } else {
    digitalWrite(relay, LOW);   //then Turn off the street light
  }

  delay(1000);  // how long would you want the system to wait before it takes the next reading 
}
