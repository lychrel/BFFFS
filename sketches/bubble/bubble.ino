int motorPin = 3;

const int pullup = 2;
const int LED = 13;
const int UVleds = 4;

 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);

  pinMode(pullup, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(UVleds, OUTPUT);
  
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
} 
 
 
void loop() 
{ 
  
  //read the pushbutton value into a variable
  int buttonVal = digitalRead(2);
  //print out the value of the pushbutton
  Serial.println(buttonVal);
  
  // Keep in mind the pullup means the pushbutton's
  // logic is inverted. It goes HIGH when it's open,
  // and LOW when it's pressed. Turn on pin 13 when the
  // button's pressed, and off when it's not:
  if (buttonVal == HIGH) {
    digitalWrite(LED, LOW);
    digitalWrite(UVleds, LOW);
    analogWrite(motorPin, 0);
  } else {
    digitalWrite(LED, HIGH);
    digitalWrite(UVleds, HIGH);
    analogWrite(motorPin, 200);
  }
 
} 
 

