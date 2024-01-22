//Si no se pulsa ninguno = 0
//si se pulsa uno o los 2 = 1

int P1 = 10;
int P2 = 12;

void setup()
{
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(P1)==0 or digitalRead(P2)==0){
      Serial.println("1");}

  else{
    if (digitalRead(P2)==1 or digitalRead(P1)==1){
    Serial.println("0");
    }
  }
}