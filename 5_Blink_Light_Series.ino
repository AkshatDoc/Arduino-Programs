/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  by Akshat Doctor
  modified 4 Nov 2017
*/
int led1 = 13;
int wut = 3000;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin led1 as an output.
  pinMode(led1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int led1 =13; led1 > 8; led1--){
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wut);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(wut);                       // wait for a second
 digitalWrite(led1-1,HIGH);
 delay(wut);
 digitalWrite(led1-1,LOW);
  } for (int led1=8;led1>8;led1++){
   digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(wut);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(wut);                       // wait for a second
 digitalWrite(led1+1,HIGH);`
 delay(wut);



    
  }
}
