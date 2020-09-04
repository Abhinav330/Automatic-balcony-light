//Code for 1st system 
//By #ATALL youtube channel. 
int x ,y ;
void setup()
{
  Serial.begin(9600);
  Serial.println("Code by #ATALL");
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
