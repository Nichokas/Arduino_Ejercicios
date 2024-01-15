int i;
int x;
int y;

int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int DP = 9;

void setup()
{
  for(i=2; i<9;i=i+1){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,1);
  digitalWrite(G,0);
  digitalWrite(DP,0);
}