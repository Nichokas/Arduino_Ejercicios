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
  Serial.println("Apagado");

  delay(3000);
  
  digitalWrite(R, 1);
  digitalWrite(A, 0);
  digitalWrite(V, 0);
  Serial.println("Rojo");
  
  delay(3000);
  
  digitalWrite(R, 0);
  digitalWrite(A, 1);
  digitalWrite(V, 0);
  Serial.println("Azul");
  
  delay(3000);
  
  digitalWrite(R, 0);
  digitalWrite(A, 0);
  digitalWrite(V, 1);
  Serial.println("Verde");

  delay(3000);

  digitalWrite(R, 1);
  digitalWrite(A, 1);
  digitalWrite(V, 0);
  Serial.println("Purpra");

  delay(3000);

  digitalWrite(R, 1);
  digitalWrite(A, 0);
  digitalWrite(V, 1);
  Serial.println("Amarillo");

  delay(3000);

  digitalWrite(R, 0);
  digitalWrite(A, 1);
  digitalWrite(V, 1);
  Serial.println("Cyan");

  delay(3000);

  digitalWrite(R, 1);
  digitalWrite(A, 1);
  digitalWrite(V, 1);
  Serial.println("Blanco");
}