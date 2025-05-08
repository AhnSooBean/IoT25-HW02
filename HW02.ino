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
  Serial.println(buttonState);
  // check if pushbutton is pressed.
  if (buttonState == LOW) {
    digitalWrite(ledPin, LOW);    // turn LED on
  } else {
    digitalWrite(ledPin, HIGH);    // turn LED off
  }
}