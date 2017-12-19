/*
 * Author: Akshat Doctor
 * Date:2017/12/16
 * Email:akshatdr@gmail.com
 * Function: 3 LED are put to mark distance; Green, Yellow, Red
 */
const int TrigPin = 2;
const int EchoPin = 3;
float cm;
const int RED = 10;
const int YELLOW = 11;
const int GREEN = 12;
const int BUZZER = 6;
void setup()
{
Serial.begin(9600);
pinMode(TrigPin, OUTPUT);
pinMode(EchoPin, INPUT);
}
void loop()
{
digitalWrite(TrigPin, LOW);       
delayMicroseconds(2);
digitalWrite(TrigPin, HIGH);
delayMicroseconds(10);
digitalWrite(TrigPin, LOW);
cm = pulseIn(EchoPin, HIGH) / 58.0; //The echo time is converted into cm
cm = (int(cm * 100.0)) / 100.0;     //Keep two decimal places
Serial.print("Distance\t=\t");
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(1000);

  if(cm > 200){
    digitalWrite(GREEN,HIGH);
    noTone(BUZZER);
  }
  else{
    digitalWrite(GREEN,LOW);
  }

  
  if(cm > 100 && cm < 199){
  digitalWrite(YELLOW,HIGH);
  tone(BUZZER, 329.63);
  tone(BUZZER, 293.66);
  tone(BUZZER, 261.63);
}
  else{
    digitalWrite(YELLOW,LOW);
  }

  if(cm > 1 && cm < 99){
  digitalWrite(RED,HIGH);
  tone(BUZZER, 466.16);
  }
    else{
    digitalWrite(RED,LOW);
  }

}
