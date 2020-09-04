 int x ,y ;
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop()
{
  x = analogRead(A0);
  y = map(x , 6 ,800 , 0 ,100);
  Serial.print(y);
  Serial.println("% \n");
  delay(1000);

}
