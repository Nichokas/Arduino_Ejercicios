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
//0
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,1);
  digitalWrite(G,0);
  digitalWrite(DP,0);

//1
  digitalWrite(A,0);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,0);
  digitalWrite(DP,0);

//2
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,0);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,0);
  digitalWrite(G,1);
  digitalWrite(DP,0);

//3
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,1);
  digitalWrite(DP,0);

//4
  digitalWrite(A,0);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);

//5
  digitalWrite(A,1);
  digitalWrite(B,0);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,0);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);

//6
  digitalWrite(A,1);
  digitalWrite(B,0);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);

//7
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,0);
  digitalWrite(DP,0);

//8
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);

//9
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);

  //10
  digitalWrite(A,0);
  digitalWrite(B,0);
  digitalWrite(C,0);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,0);
  digitalWrite(DP,1);
}