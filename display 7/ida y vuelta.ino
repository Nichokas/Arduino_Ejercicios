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

void setup()
{
  for(i=2; i<9;i=i+1){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(x=2; x<9;x=x+1){
    digitalWrite(x,1);
    delay(333);
  }
}