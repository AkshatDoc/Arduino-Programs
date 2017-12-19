#include <IRremote.h> 
#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 6, 5, 4, 3);
const int irReceiverPin = 2; 
IRrecv irrecv(irReceiverPin);
decode_results results;

void setup() { 
  Serial.begin(9600); 
  irrecv.enableIRIn(); 
  lcd.begin(16,2); 
  lcd.print(" Welcome to "); 
   lcd.setCursor(0,1);
   lcd.print(" Smraza");
  }
void loop() { 
  lcd.display(); 
  delay(500); 

  if (irrecv.decode(&results)) 
  { 
   lcd.print("IR_Code: "); 
  lcd.print(results.value, HEX); 
  lcd.print(", Bits: "); 
  lcd.println(results.bits); 
  irrecv.resume(); } 
  delay(600);
  } 

