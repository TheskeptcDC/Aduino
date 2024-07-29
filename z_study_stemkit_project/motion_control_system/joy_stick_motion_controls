#define ENTER 8
#define x_axis A2
#define y_axis A1
 
void setup() {
    Serial.begin(115200);
    pinMode(ENTER, INPUT);
    pinMode(x_axis, INPUT);
    pinMode(y_axis, INPUT);
}

void loop() {
    // Read the joystick position.. the x is for how far left or how far right 
    // and y is for how far up and how far down 
    int xPosition = analogRead(x_axis);
    int yPosition = analogRead(y_axis);

    // Read the button state
    int buttonState = digitalRead(ENTER);

    // Print the joystick positions and button state to the Serial Monitor
    Serial.print("X: ");
    Serial.print(xPosition);
    Serial.print(" | Y: ");
    Serial.print(yPosition);
    Serial.print(" | Button: ");
    Serial.println(buttonState);

    // Delay for a bit to avoid flooding the Serial Monitor
    delay(100);
}
