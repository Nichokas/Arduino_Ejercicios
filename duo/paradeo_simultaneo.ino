void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  delay(1000);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  delay(1000);
}