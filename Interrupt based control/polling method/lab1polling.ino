int x,y,z,a; 
void setup()
{
  noInterrupts();                            
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);                              
}

void loop() 
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
