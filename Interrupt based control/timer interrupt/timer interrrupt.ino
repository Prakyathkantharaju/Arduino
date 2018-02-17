#include <TimerOne.h>
int x,y,z,a; 
void setup() 
{
  interrupts();                            // This line prevents any other interrupts from interfering
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  Timer1.initialize(50);
  Timer1.attachInterrupt(p);              
  noInterrupts();                              
}
void p()
{
    x=digitalRead(A0);
    y=digitalRead(A1);
    z=digitalRead(A2);
    a=digitalRead(A3);                      
    digitalWrite(7,x);
    digitalWrite(6,y);
    digitalWrite(4,z);
    digitalWrite(2,a);
    
}
void loop() 
{
  // put your main code here, to run repeatedly:
}
