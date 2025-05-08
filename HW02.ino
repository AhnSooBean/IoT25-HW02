// set pin numbers
const int buttonPin = 4;  // pushbutton pin
const int ledPin =  5;    // LED pin

// variable for storing pushbutton status 
int buttonState = 0;

void setup() {
  Serial.begin(115200);  
  pinMode(buttonPin, INPUT);  // initialize pushbutton pin as input
  pinMode(ledPin, OUTPUT);  // initialize LED pin as output
}

void loop() {
  // read state of pushbutton value
  buttonState = digitalRead(buttonPin);
  // 0 if pressed, 1 if not pressed
  Serial.println(buttonState);
  // HIGH if pushbutton is not pressed
  if (buttonState == HIGH) {
    digitalWrite(ledPin, LOW);    // turn LED off
  } else {
    digitalWrite(ledPin, HIGH);    // turn LED on
  }
}
