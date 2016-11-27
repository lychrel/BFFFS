 const int motorPin = 3;
 const int pullup = 2;
 const int LED = 13;
 const int UVleds = 4;

 int Speed;
 int flag;

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin2 as an input and enable the internal pull-up resistor
  pinMode(pullup, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(UVleds, OUTPUT);
  Serial.println("Give a number from 50 to 255.");
  Serial.println(""); //Blank line
}

void loop() {
  //read the pushbutton value into a variable
  int buttonVal = digitalRead(2);
  //print out the value of the pushbutton
  Serial.println(buttonVal);

  if (buttonVal == HIGH) {
    digitalWrite(LED, LOW);
    digitalWrite(UVleds, LOW);
    analogWrite(motorPin, 0);
  } else {
    digitalWrite(LED, HIGH);
    digitalWrite(UVleds, HIGH);
    analogWrite(motorPin, 255);
  }
  delay(1000);
}
