int R=9;
int A=8;
int V=7;

void setup()
{
  pinMode(R, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(V, OUTPUT);
}

void loop()
{
  for(int r = 0; r <= 1; r++) {
    for(int a = 0; a <= 1; a++) {
      for(int v = 0; v <= 1; v++) {
        digitalWrite(R, r);
        digitalWrite(A, a);
        digitalWrite(V, v);
        delay(3000);
      }
    }
  }
}