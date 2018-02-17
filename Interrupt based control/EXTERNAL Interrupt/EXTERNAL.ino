int x,y,z,a;
boolean ledon=false;  
void setup() 
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(8,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  attachInterrupt(1,p,FALLING);
 }
void p()
{                      
    if(ledon){
    ledon=false;
    digitalWrite(8,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);  
    }else{
    ledon=true;
    digitalWrite(8,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(2,HIGH);  
    }
    
    
}

void loop() 
{

}
