#include <LiquidCrystal.h> 

LiquidCrystal lcd(12, 11, 5, 4, 6, 7); 
const int TrigPin = 2; 
const int EchoPin = 3; 
float cm;

void setup() { 
  // set up the LCD's number of columns and rows: 
  
  
  pinMode(TrigPin, OUTPUT); 
  pinMode(EchoPin, INPUT);

  lcd.begin(16,2); // Print a message to the LCD. 
  lcd.print(" Welcome to "); 
  lcd.print(" Smraza"); } 

  void loop() { 
    // Turn off the display: 
    lcd.noDisplay(); 
    delay(500); // Turn on the display: 
    lcd.display(); delay(500); }
    digitalWrite(TrigPin, LOW); 
    delayMicroseconds(2); 
    digitalWrite(TrigPin, HIGH); 
    delayMicroseconds(10); 
    digitalWrite=(TrigPin, LOW);
    cm = pulseIn(EchoPin, HIGH) / 58.0; //The echo time is converted into cm 
    cm = (int(cm * 100.0)) / 100.0; //Keep two decimal places 
    Serial.print("Distance\t=\t"); 
    Serial.print(cm); 
    Serial.print("cm"); 

    Serial.println(); 
   
    if( cm > 38000 ) Serial.println("out of reach");    
    else { Serial.print(cm); Serial.println("cm");} 

}

