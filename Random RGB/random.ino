int r=11;
int a=10;
int v=9;

int i;

int x=0;
int y=0;
int z=0;

void setup()
{
  for(i=9;i<12;i=i+1){
    pinMode(i, OUTPUT);}
  Serial.begin(9600);
}

void loop()
{
  x=random(255);
  y=random(255);
  z=random(255);
  
  color(x,y,z);
  
  Serial.print(x);
  Serial.print(" ");
  Serial.print(y);
  Serial.print(" ");
  Serial.print(z);
  Serial.println("");
}

void color(int R,int A,int V){
  analogWrite(r, R);
  analogWrite(a, A);
  analogWrite(v, V);
  delay(200);}
