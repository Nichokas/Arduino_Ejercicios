int i;
int x;
int y;

int num;

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
  num=random(7,11);
  Serial.println(num);

  switch(num){

    case 0:
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,1);
  digitalWrite(G,0);
  digitalWrite(DP,0);
  break;

    case 1:
  digitalWrite(A,0);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,0);
  digitalWrite(DP,0);
  break;

    case 2:
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,0);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,0);
  digitalWrite(G,1);
  digitalWrite(DP,0);
  break;

    case 3:
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,1);
  digitalWrite(DP,0);
  break;

    case 4:
  digitalWrite(A,0);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);
  break;

    case 5:
  digitalWrite(A,1);
  digitalWrite(B,0);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,0);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);
  break;

    case 6:
  digitalWrite(A,1);
  digitalWrite(B,0);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);
  break;

    case 7:
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,0);
  digitalWrite(DP,0);
  break;

    case 8:
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,1);
  digitalWrite(E,1);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);
  break;

    case 9:
  digitalWrite(A,1);
  digitalWrite(B,1);
  digitalWrite(C,1);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,1);
  digitalWrite(G,1);
  digitalWrite(DP,0);
  break;

    case 10:
  digitalWrite(A,0);
  digitalWrite(B,0);
  digitalWrite(C,0);
  digitalWrite(D,0);
  digitalWrite(E,0);
  digitalWrite(F,0);
  digitalWrite(G,0);
  digitalWrite(DP,1);
  break;}

  delay(200);

}