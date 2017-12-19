

#include <IRremote.h> 
#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11, 6, 5, 4, 3);
const int irReceiverPin = 2;
IRrecv irrecv(irReceiverPin);
decode_results results;
unsigned long key_value = 0;


void setup() { 
  Serial.begin(9600); 
  irrecv.enableIRIn(); 
  lcd.begin(16,2); 

  }
void loop() { 
  lcd.display(); 
  delay(500); 
   
 if (irrecv.decode(&results)){
 
        if (results.value == 0xFFFFFF )
          results.value = key_value;

    switch(results.value){
          case 0xFFA25D:
          lcd.print("1");
          break;
          case 0xFF629D:
          lcd.print("2");
          break;
          case 0xFFE21D :
          lcd.print("3");
          break;
          case 0xFF22DD:
          lcd.print("4");
          break;
          case 0xFF02FD:
          lcd.print("5");
          break ;  
          case  0xFFC23D:
          lcd.print("6");
          break ;               
          case 0xFFE01F:
          lcd.print("7");
          break ;  
          case 0xFFA857:
          lcd.print("8");
          break ;  
          case 0xFF906F:
          lcd.print("9");
          break ;  
          case 0xFF9867:
          lcd.print("0");
          break ;  
          case 0xFF6897:
          lcd.print("*");
          break ;
          case 0xFFB04F:
          lcd.print("#");
          break ;
          case 0xFF18E7:
          lcd.print("+");
          break ;
          case 0xFF5AA5:
          lcd.print("->");
          break ;
          case 0xFF4AB5:
          lcd.print("-");
          break ;
          case 0xFF38C7:
          lcd.print("OK");
              
      } 
  
         key_value = results.value;
          irrecv.resume(); 
          
  }
}

