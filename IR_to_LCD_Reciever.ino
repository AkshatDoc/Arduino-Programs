/*
 * Akshat Doctor
 * 2017-12-07
 * This progranm first prints the the number/command from hex to ASCII  
 * Buttons 1 - 4 on the IR Remote control one LED to turn it on and off
 * Tech Help akshatdr@gmail.com 
 * This uses LCD 1602 and IR sensors
 */

#include <IRremote.h>//IR lib
#include <LiquidCrystal.h>//LCD1602 lib

int pinArray[] = {8,9,10,7};//LED pins
int timer = 500;
const int RECV_PIN = 2;//IR connected to pin on Arduino
LiquidCrystal lcd(12, 11, 6, 5, 4, 3);//LCD pins
IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long key_value = 0;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn(); 
  
  lcd.begin(16, 2);
}

void loop(){
  if (irrecv.decode(&results)){ //Prints the name of the buttons
 
        if (results.value == 0XFFFFFF)
        results.value = key_value;
        lcd.setCursor(0, 0);
        lcd.clear();
        
        switch(results.value){
          case 0xFFA25D:          
          lcd.print("1");
          break;
          
          case 0xFF629D:
          lcd.print("2");
          break;
          
          case 0xFFE21D:
          lcd.print("3");
          break;
          
          case 0xFF22DD:
          lcd.print("4");
          break;
          
          case 0xFF02FD:
          lcd.print("5");
          break ;  
          
          case 0xFFC23D:
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
          
          case 0xFF6897:
          lcd.print("*");
          break ;
            
          case 0xFF9867:
          lcd.print("0");
          break ;
          
          case 0xFFB04F:
          lcd.print("#");
          break ;
          
          case 0xFF10EF:
          lcd.print("Left");
          break ;
          
          case 0xFF18E7:
          lcd.print("Up");
          break ;
          
          case 0xFF5AA5:
          lcd.print("Right");
          break ;
          
          case 0xFF4AB5:
          lcd.print("Down");
          break ;
          
          case 0xFF38C7:
          lcd.print("OK");
          break ;
          
          
        }
        key_value = results.value;
        irrecv.resume(); 
  }
  if (results.value == 0xFFA25D){//FOr LED1
    digitalWrite(pinArray[0],HIGH);
    delay(timer);
    digitalWrite(pinArray[0],LOW);
    delay(timer);
  }




  if (results.value == 0xFF629D){ //For LED2
    digitalWrite(pinArray[1],HIGH);
    delay(timer);
    digitalWrite(pinArray[1],LOW);
    delay(timer);
  
   }




  if (results.value == 0xFFE21D){//For LED3
    digitalWrite(pinArray[2],HIGH);
    delay(timer);
    digitalWrite(pinArray[2],LOW);
    delay(timer);

} 


  if (results.value == 0xFF22DD){ //For LED4
    digitalWrite(pinArray[3],HIGH);
    delay(timer);
    digitalWrite(pinArray[3],LOW);
    delay(timer);
  }


}




