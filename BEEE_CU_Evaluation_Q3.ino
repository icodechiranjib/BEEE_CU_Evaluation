int val=0;
int c = 0;
void setup()
{
  Serial.begin(9600);
  for (int i=10;i<=13;i++)
  {
  	pinMode(i,OUTPUT);
  }  
  pinMode(2,INPUT);
}
void loop()
{
int i;
c = analogRead(A0);
val = digitalRead(2);               //To print the ldr value in Serial Monitor
delay(500);
Serial.print(c);
Serial.print("  ");
Serial.println(val);
  if (val == HIGH) 
  {       
    if (c<=340)                     //Since the max valuue in Serial Monitor shown was 680 therfore 50% of it is 340
    {
    	for (i=10;i<=13;i++)
  		{
  			digitalWrite(i,HIGH);
  		} 
    }
    else
    {
      digitalWrite(13,HIGH);
    }
  } 
  else 
  {
    for (i=10;i<=13;i++)
  		{
  			digitalWrite(i,LOW);
  		} 
  }
}
