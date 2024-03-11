int b=2;
int r=10;

int A=3;
int B=4;
int C=5;
int D=6;
int E=7;
int F=8;
int G=9;

int p=11;

int var;
int numero=0;

void setup(){
  for (int c=1; c<10; c++){
      pinMode(c, OUTPUT);
  }
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void loop()
{
    if (digitalRead(p)==1){
        while(var<0){
            numero=random(1,5);
            par(numero);
            dp_controler(numero);
            var++;
        }
    }
    if (digitalRead(p)==0){
      dp_controler(0);
      var=0;
    }
}

void par(int num){
    if (num == 1 || num==3 || num==5){
        digitalWrite(r,1);
        digitalWrite(b,0);
    }
    if (num==2 || num==4){
        digitalWrite(r,1);
        digitalWrite(b,0);
    }
    if (num==0){
      digitalWrite(r,0);
      digitalWrite(b,0);
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
         break;

          case 1:
        digitalWrite(A,0);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,0);
        digitalWrite(E,0);
        digitalWrite(F,0);
        digitalWrite(G,0);
        break;

          case 2:
        digitalWrite(A,1);
        digitalWrite(B,1);
        digitalWrite(C,0);
        digitalWrite(D,1);
        digitalWrite(E,1);
        digitalWrite(F,0);
        digitalWrite(G,1);
        break;

          case 3:
        digitalWrite(A,1);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,1);
        digitalWrite(E,0);
        digitalWrite(F,0);
        digitalWrite(G,1);
        break;

          case 4:
        digitalWrite(A,0);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,0);
        digitalWrite(E,0);
        digitalWrite(F,1);
        digitalWrite(G,1);
        break;

          case 5:
        digitalWrite(A,1);
        digitalWrite(B,0);
        digitalWrite(C,1);
        digitalWrite(D,1);
        digitalWrite(E,0);
        digitalWrite(F,1);
        digitalWrite(G,1);
        break;
    }
}