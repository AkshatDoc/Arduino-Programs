/*
 *Akshat Doctor
 *2017/12/18
 *This program takes an LCD screen and button, and then generates a random number from 1-100
 */
 
 int button= 7;
 int buttonState=0;
// initialize the library with the numbers of the interface pins
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()                                                                                     
{
// set up the LCD's number of columns and rows: 
lcd.begin(16,2);

lcd.setCursor(0,1); //Display position
 pinMode(button,INPUT);

 lcd.print("HELLO");

} 
void loop()
{
  lcd.clear()
 digitalWrite(led,HIGH);
  buttonState = 1;
  buttonState = digitalRead(button);
    if(buttonState == 1){
     lcd.display();
      delay(250);
      lcd.setCursor(1,0);
      lcd.print("Number:");
      lcd.setCursor(8, 0);
      lcd.print(random(100));
      delay(250);    
      buttonState = 0;
      delay(1000);
    }
    else{    
    lcd.print("No number for you!")
    buttonState = 0;
      }





      
  }


