int A=3;
int B=2;
int C=6;
int D=7;
int E=8;
int F=4;
int G=5;
int DP=9;

int R=13;

int mas=10;
int menos=11;
int st=12;

int num=0;
int x=0;
int y;
int z=0;
int i=0;

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);

  pinMode(R, OUTPUT);

  pinMode(mas, INPUT);
  pinMode(menos, INPUT);
  pinMode(st, INPUT);

  Serial.begin(9600);
}

void loop()
{
  if (x==0){
    dp_controler(0);
    digitalWrite(R,0);
    x=1;
  }
  if (x==1){
    Serial.println(y);
    if (digitalRead(mas)==1){
      y=y+1;
      dp_controler(y);
      delay(250);
    }
    if (digitalRead(menos)==1){
      if (y==0){
        Serial.println("El valor no puede ser inferior a 0");
        digitalWrite(R,1);
        delay(300);
        digitalWrite(R,0);
      }
      else{
        y=y-1;
        dp_controler(y);
        delay(250);}
    }
    if (digitalRead(st)==1){
      x=2;
      y=y;
      Serial.println("2/");
      }
    }
  if (x==2){
    Serial.println("2");
    for (z=0; z>y; z=z+1){
      Serial.println("2_loop");
      Serial.println(i);
      delay(60000);
      y=y-1;
      dp_controler(y);
      Serial.println(y);
    x=1;
    }
  }
}
  

void dp_controler(int num){
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
    }
}