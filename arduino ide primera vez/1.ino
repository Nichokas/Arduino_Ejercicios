void setup()
{
  pinMode(8, OUTPUT);
}

void loop()
{
    digitalWrite(8, 1);
    delay(400);
    digitalWrite(8, 0);
    delay(400);
}