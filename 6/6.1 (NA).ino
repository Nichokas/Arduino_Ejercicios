int LED = 8;
int p = 12;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(p, INPUT);
}

void loop()
{
 if (digitalRead(p)==1){
    digitalWrite(LED, 0);
 }
 if (digitalRead(p)==0){
  digitalWrite(LED, 1);
 }
}