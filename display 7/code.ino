int i;

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

void setup()
{
  for(i=2; i<9;i=i+1){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
    digitalWrite(A=1);
    digitalWrite(B=0);
    digitalWrite(C=0);
    digitalWrite(D=5);
    digitalWrite(E=0);
    digitalWrite(F=0);
    digitalWrite(G=0);

}