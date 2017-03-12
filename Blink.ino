/*
  Blink
  Simmulates traffic lights.
  Red light turns on for 5 seconds, yellow for 1, green for 5, yellow for 1 and so on.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int redled = 13;
int yellowled = 12;
int greenled = 11;
int DELAYRED = 5000;
int DELAYYELLOW = 1000;
int DELAYGREEN = 5000;
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(redled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(greenled, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(redled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(DELAYRED);               // wait for a second
  digitalWrite(redled, LOW);    // turn the LED off by making the voltage LOW
  //delay(DELAYRED);               // wait for a second
  
  digitalWrite(yellowled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(DELAYYELLOW);               // wait for a second
  digitalWrite(yellowled, LOW);    // turn the LED off by making the voltage LOW
  //delay(DELAYYELLOW);          // wait for a second
  
  digitalWrite(greenled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(DELAYGREEN);               // wait for a second
  digitalWrite(greenled, LOW);    // turn the LED off by making the voltage LOW
  //delay(DELAYGREEN); 
  
  digitalWrite(yellowled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(DELAYYELLOW);               // wait for a second
  digitalWrite(yellowled, LOW);    // turn the LED off by making the voltage LOW
  //delay(DELAYYELLOW);          // wait for a second
  
}

