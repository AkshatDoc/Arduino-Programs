int photo = A0;
int LED = 9;

void setup() {
  // put your setup code here, to run once:

pinMode(photo,INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    int light = analogRead(photo);
//    delay(300);
//    Serial.println(light);
    light = 0;
    if(0<=light && light<32){
      analogWrite(LED,256);
    }else if(32<=light && light<64){
            analogWrite(LED,216);
    }else if(64<=light && light<96){
                  analogWrite(LED,184);
    }else if(96<=light && light<128){
                  analogWrite(LED,152);
    }else if(128<=light && light<160){
                  analogWrite(LED,120);
    }else if(160<=light && light<192){
                  analogWrite(LED,88);
    }else if(192<=light && light<224){
                  analogWrite(LED,58);
    }else if(224<=light && light<=256){
                  analogWrite(LED,1);
    }
      else{
      digitalWrite(LED,LOW);
    }
}
