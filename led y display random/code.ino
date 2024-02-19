int A=3;
int B=2;
int C=6;
int D=7;
int E=8;
int F=4;
int G=5;

int R=13;

int mas=10;
int menos=11;
int st=12;


int x=0;
int y;
int z=0;
int i=0;
int num=0;
int r=11;
int g=1;
int b=13;

void setup(){
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);

  pinMode(R, OUTPUT);

  pinMode(mas, INPUT);
  pinMode(menos, INPUT);
  pinMode(st, INPUT);
  
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);

  pinMode(9, INPUT);

  Serial.begin(9600);}

void loop(){
  if (digitalRead(12)==1){
    color(random(255), random(255), random(255));
    delay(250);}
  if (digitalRead(12)==0){
  	color(0,0,0);}
  
  if (digitalRead(9)==1){
  	dp_controler(random(0,9));
    delay(250);}
  if (digitalRead(9)==0){
    dp_controler(10);}
    
}
  
void color(int Re, int Gr, int Bl) { 
  analogWrite(r, Re);
  analogWrite(g, Gr);
  analogWrite(b, Bl);
  delay(200);}

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

          case 6:
        digitalWrite(A,1);
        digitalWrite(B,0);
        digitalWrite(C,1);
        digitalWrite(D,1);
        digitalWrite(E,1);
        digitalWrite(F,1);
        digitalWrite(G,1);
        break;

          case 7:
        digitalWrite(A,1);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,0);
        digitalWrite(E,0);
        digitalWrite(F,0);
        digitalWrite(G,0);
        break;

          case 8:
        digitalWrite(A,1);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,1);
        digitalWrite(E,1);
        digitalWrite(F,1);
        digitalWrite(G,1);
        break;

          case 9:
        digitalWrite(A,1);
        digitalWrite(B,1);
        digitalWrite(C,1);
        digitalWrite(D,0);
        digitalWrite(E,0);
        digitalWrite(F,1);
        digitalWrite(G,1);
        break;
      
      	  case 10:
      	digitalWrite(A,0);
      	digitalWrite(B,0);
      	digitalWrite(C,0);
      	digitalWrite(D,0);
      	digitalWrite(E,0);
      	digitalWrite(F,0);
      	digitalWrite(G,0);
      	break;
    }
}