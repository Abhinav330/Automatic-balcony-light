 int x ,y, z ;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  digitalWrite(13,LOW);
}

void loop()
{
  x = analogRead(A0);
  y = map(x , 6 ,800 , 0 ,100);
  Serial.print(y);
  Serial.println("% \n"); 
   if(y == z)
    {
      if(y >= 7)
       {
          digitalWrite(13, LOW);
          Serial.println("Light off");
       }
      else if(y <=2)
       {
          digitalWrite(13, HIGH);
          Serial.println("Light on");
       }
    }
z = y;
delay(2000);
}
