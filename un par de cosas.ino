int x=0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  for(x=8;x<14;x++){
    digitalWrite(x,1);
    delay(2000);
    digitalWrite(x,0);
  }
}