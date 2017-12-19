/*
 * Akshat Doctor
 * 2017-11-06
 * 7_Segment_LED
 * This Program inputs many different cominations of common Cathode LED's on at the same time to create numbers, letters or other shapes
 */

int timer = 10000;
int a[10][10]={ {01,1,1,1,1,1,0}, //0 
{0,1,1,1,1,1,1,0}, //1 
{0,0,0,1,1,0,0,0}, //2 
{1,0,1,1,0,1,1,0}, //3
{1,1,0,1,0,0,1,0}, //4
{1,1,1,0,0,1,1,0}, //5 
{1,1,1,0,1,1,1,0}, //6 
{0,0,1,1,0,0,1,0}, //7 
{1,1,1,1,1,1,1,0}, //8 
{1,1,1,1,0,1,1,0},}; //9 
void setup() {
  for (int i=2;i<=9;i++) 
  { pinMode(i,OUTPUT); } 
  } 
void printf(int v) {
  for (int i=2;i<=9;i++) { digitalWrite(i,a[v][i]); } 
  }
void loop() {
    for (int i=2;i<=9;i++) 
    { printf(i); delay(timer); } 
    }
