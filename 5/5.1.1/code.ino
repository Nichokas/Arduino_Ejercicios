void setup(){
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  for(int i = 8; i <= 12; i += 2){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
  
  delay(3000);
}