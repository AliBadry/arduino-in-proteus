  float temp;
void setup()
{
  Serial.begin(9600);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop()
{
  temp = analogRead(A0);
  temp = temp * 0.48828125;
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println();
  if(temp<20)
  {digitalWrite(7, HIGH);
    delay(1000);
  digitalWrite(7,LOW);}
  else if(temp<40)
  {digitalWrite(8, HIGH);
    delay(1000);
  digitalWrite(8,LOW);}
  else
  {digitalWrite(9, HIGH);
   digitalWrite(10, HIGH);
    delay(1000);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);}
}
