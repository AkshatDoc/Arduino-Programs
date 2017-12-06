int LED1 = 13;
int LED2 = 11;
int LED3 = 3;
int LED4 = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
delay(1000);
digitalWrite(LED1,HIGH);
delay(1000);
digitalWrite(LED1,LOW);
delay(1000);
digitalWrite(LED2,HIGH);
delay(1000);
digitalWrite(LED2,LOW);
delay(1000);
digitalWrite(LED3,HIGH);
delay(1000);
digitalWrite(LED3,LOW);
delay(1000);
digitalWrite(LED4,HIGH);
delay(1000);
digitalWrite(LED4,LOW);


}
