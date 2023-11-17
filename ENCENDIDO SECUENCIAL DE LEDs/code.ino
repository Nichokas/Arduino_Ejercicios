int x=0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  for(x=3;x<14;x=x+2){
    digitalWrite(x,1);
    delay(2000);
  }

  for(x=13;x>2;x=x-2){
    digitalWrite(x,0);
  }
  delay(2000);

}