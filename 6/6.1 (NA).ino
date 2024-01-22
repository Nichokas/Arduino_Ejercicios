int LED = 8;
int p = 12;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(p, INPUT);
}

void loop()
{
 if (digitalWrite(p)==0){
    digitalWrite(LED, 0);
 }
 if (digitalWrite(p)==1){
  digitalWrite(LED, 1);
 }
}