void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(8, 0);
  digitalWrite(10, 0);
  digitalWrite(12, 0);

  delay(3000);

  digitalWrite(8, 1);
  digitalWrite(10, 0);
  digitalWrite(12, 0);

  delay(3000);
  
  digitalWrite(8, 0);
  digitalWrite(10, 1);
  digitalWrite(12, 0);
  
  delay(3000);
  
  digitalWrite(8, 0);
  digitalWrite(10, 0);
  digitalWrite(12, 1);
  
  delay(3000);
}