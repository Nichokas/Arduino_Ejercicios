int R=9;
int A=8;
int V=7;

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(V, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(R, 0);
  digitalWrite(A, 0);
  digitalWrite(V, 0);

  delay(3000);
  
  digitalWrite(R, 1);
  digitalWrite(A, 0);
  digitalWrite(V, 0);
  
  delay(3000);
  
  digitalWrite(R, 0);
  digitalWrite(A, 1);
  digitalWrite(V, 0);
  
  delay(3000);
  
  digitalWrite(R, 0);
  digitalWrite(A, 0);
  digitalWrite(V, 1);

  delay(3000);

  digitalWrite(R, 1);
  digitalWrite(A, 1);
  digitalWrite(V, 0);

  delay(3000);

  digitalWrite(R, 1);
  digitalWrite(A, 0);
  digitalWrite(V, 1);

  delay(3000);

  digitalWrite(R, 0);
  digitalWrite(A, 1);
  digitalWrite(V, 1);
  delay(3000);

  digitalWrite(R, 1);
  digitalWrite(A, 1);
  digitalWrite(V, 1);
}