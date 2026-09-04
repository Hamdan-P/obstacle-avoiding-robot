double distance;
int trig=11;
int echo=10;
int fr=5,bk=6,rt=3;
double time;
void setup()
{
  Serial.begin(9600);
  Serial.println("Setup done");
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(fr,OUTPUT);
  pinMode(bk,OUTPUT);
  pinMode(rt,OUTPUT);
  
}

double getDistance(){
  
   digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  time=pulseIn(echo,HIGH);
  return time*0.0349*0.5;
  
}
void turn(){
   digitalWrite(fr,0);
  delay(500);
   digitalWrite(rt,HIGH);
  digitalWrite(fr,HIGH);
  delay(500);
   digitalWrite(rt,LOW);
  digitalWrite(fr,LOW);
  delay(500);
}

void loop()
{
  delay(50);
 distance=getDistance();
 Serial.println(distance);
  if (distance>20){
    analogWrite(fr,150);
  }
 else{
   turn();
   return; 
  }
}
