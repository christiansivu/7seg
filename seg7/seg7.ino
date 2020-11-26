#define LEDa 5
#define LEDb 4
#define LEDc 9
#define LEDd 10
#define LEDe 11
#define LEDf 6
#define LEDg 7


#define LEDON LOW
#define LEDOFF HIGH



void setup()
{
    pinMode(LEDa, OUTPUT);
   digitalWrite(LEDa, LEDOFF); 
 
   pinMode(LEDb, OUTPUT);
    digitalWrite(LEDb, LEDOFF);
 
   pinMode(LEDc, OUTPUT);
   digitalWrite(LEDc, LEDOFF);
 
   pinMode(LEDd, OUTPUT);
   digitalWrite(LEDd, LEDOFF);
 
   pinMode(LEDe, OUTPUT);
    digitalWrite(LEDe, LEDOFF);
 
   pinMode(LEDf, OUTPUT);
   digitalWrite(LEDf, LEDOFF);
 
   pinMode(LEDg, OUTPUT);
   digitalWrite(LEDg, LEDOFF);
}



void zero()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDON);
  digitalWrite (LEDe,LEDON);
  digitalWrite (LEDf,LEDON);
  digitalWrite (LEDg,LEDOFF);
}
void one()
{
digitalWrite (LEDa,LEDOFF);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDOFF);
  digitalWrite (LEDe,LEDOFF);
  digitalWrite (LEDf,LEDOFF);
  digitalWrite (LEDg,LEDOFF);
}
void two()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDOFF);
  digitalWrite (LEDd,LEDON);
  digitalWrite (LEDe,LEDON);
  digitalWrite (LEDf,LEDOFF);
  digitalWrite (LEDg,LEDON);
}
void three()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDON);
  digitalWrite (LEDe,LEDOFF);
  digitalWrite (LEDf,LEDOFF);
  digitalWrite (LEDg,LEDON);
}
void four()
{
digitalWrite (LEDa,LEDOFF);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDOFF);
  digitalWrite (LEDe,LEDOFF);
  digitalWrite (LEDf,LEDON);
  digitalWrite (LEDg,LEDON);
}
void five()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDOFF);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDON);
  digitalWrite (LEDe,LEDOFF);
  digitalWrite (LEDf,LEDON);
  digitalWrite (LEDg,LEDON);
}
void six()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDOFF);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDON);
  digitalWrite (LEDe,LEDON);
  digitalWrite (LEDf,LEDON);
  digitalWrite (LEDg,LEDON);
}
void seven()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDOFF);
  digitalWrite (LEDe,LEDOFF);
  digitalWrite (LEDf,LEDOFF);
  digitalWrite (LEDg,LEDOFF);
}
void eight()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDON);
  digitalWrite (LEDe,LEDON);
  digitalWrite (LEDf,LEDON);
  digitalWrite (LEDg,LEDON);
}
void nine()
{
digitalWrite (LEDa,LEDON);
  digitalWrite (LEDb,LEDON);
  digitalWrite (LEDc,LEDON);
  digitalWrite (LEDd,LEDON);
  digitalWrite (LEDe,LEDOFF);
  digitalWrite (LEDf,LEDON);
  digitalWrite (LEDg,LEDON);
}
void loop(){
  
  delay(1000);
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
   delay(1000);
  nine();
 
}
