/*
  PROGRAMA DE PRUEBA DE LA SHIELD S4A 1.0
 

 */

//SWITCHS
const int switch1Pin = 2;     // the number of the pushbutton pin
const int switch2Pin = 3;     // the number of the pushbutton pin
int switch1State = 0;         // variable for reading the pushbutton status
int switch2State = 0;         // variable for reading the pushbutton status

// RGB
const int ledPinR =  6;      // the number of the LED pin
const int ledPinG =  5;      // the number of the LED pin
const int ledPinB =  9;      // the number of the LED pin
const int buzzerPin=10;

//LDR
int LDRPin=A0;
int LDRvalue=0;

// LM35
int LMPin=A1;
int LMvalue=0;
int temperatura=0;

// Joystick
int xjoyPin=A4;
int yjoyPin=A5;
int sjoyPin=13;

int xjoyValue=0;
int yjoyValue=0;
int sjoyValue=0;

// Acelerometer
int xjoyPin=A4;
int yjoyPin=A5;
int sjoyPin=13;

int xjoyValue=0;
int yjoyValue=0;
int sjoyValue=0;


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPinR, OUTPUT);   
  pinMode(ledPinG, OUTPUT);  
  pinMode(ledPinB, OUTPUT);  
  pinMode(buzzerPin, OUTPUT);    
  // initialize the pushbutton pin as an input:
  pinMode(switch1Pin, INPUT);    
  pinMode(switch2Pin, INPUT);  

  pinMode(sjoyPin, INPUT); 
  Serial.begin(9600); 

}

void loop(){
  // read the state of the pushbutton value:
  switch1State = digitalRead(switch1Pin);
  switch2State = digitalRead(switch2Pin);

  
  LDRvalue=analogRead(LDRPin);
 LMvalue=analogRead(LMPin);
  Serial.print("LM");
  Serial.println(LMvalue);
  
temperatura=(LMvalue*5*100)/1024;
Serial.print("temperatura= ");
Serial.println(temperatura);
  
  Serial.print("LDR=");
  Serial.println(LDRvalue);
  
  xjoyValue=analogRead(xjoyPin);
    yjoyValue=analogRead(yjoyPin);
      Serial.print("XJOY=");
  Serial.println(xjoyValue);
        Serial.print("YJOY=");
  Serial.println(yjoyValue);
   sjoyValue=analogRead(sjoyPin); 
        Serial.print("SJOY=");
  Serial.println(sjoyValue);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (switchState1 == LOW) {     
    // turn LED on:    
    digitalWrite(ledPinR, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPinR, LOW); 
  }
  if (switchState2 == LOW) {     
    // turn LED on:    
    digitalWrite(ledPinG, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPinG, LOW); 
  }
  if (switchState3 == LOW) {     
    // turn LED on:    
    digitalWrite(ledPinB, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(ledPinB, LOW); 
  }
  if (switchState4 == LOW) {     
    // turn LED on:    
    digitalWrite(buzzerPin, HIGH);  
  } 
  else {
    // turn LED off:
    digitalWrite(buzzerPin, LOW); 
  }
delay (100);
}




