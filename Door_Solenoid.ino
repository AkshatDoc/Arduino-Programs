#include <Keypad.h>

final String pass = "1234";//Password

byte rows = 4;
byte col = 3;
byte keys[rows][col]=
{
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
  };

byte rowPins[rows] = {2,3,4,5};
byte colPin[col] = {6,7,8};

Keypad keypad = map(makeKeymap(keys),rowPins, colPins, rows, col);


int sole = 11;

void setup() {

  Serial.begin(9600);
  pinMode(sole, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(checkPass(keypad)){
    digitalWrite(sole,HIGH);
  }
}


boolean checkPass(Keypad keypad){
  String check="";
  for(int i = 0; i< pass.length(),i++){
  char key = keypad.getKey();
  check = String(check+key);
  }
  if(strcmp(pass, check)){
    return true;
  }
  return false;
}
