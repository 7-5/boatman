#include <avr/power.h> //lgt8fx board runs at 32 with this
#include <LiquidCrystal.h> //lcd display

//non lcd stuff init
bool snoozebuttonpressed=0;
bool snoozeprev=0;
int snooze=8,led=10,buzzer=9;


//lcd init
const int rs=12, en=11, d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs, en, d4,d5,d6,d7);

//shorthand functions
void c1(){lcd.setCursor(0,0);lcd.print("                ");lcd.setCursor(0,0);}
void c2(){lcd.setCursor(0,1);lcd.print("                ");lcd.setCursor(0,1);}

void buzcu();
void screen(){
  
}

void setup() {
  clock_prescale_set(clock_div_1); // must include
  Serial.begin(19200);
  pinMode(snooze,0);pinMode(led,1);pinMode(buzzer,1);//1for out 0for in
  delay(200);
  lcd.begin(16, 2);
  delay(200);
  lcd.print("meow");
  lcd.setCursor(0,1);
  c2();
}

void loop() {
  
}