int r=0;
int a=0;
int v=0;

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
  x=random(1, 255);
  y=random(1, 255);
  z=random(1, 255);
  
  color(x,y,z);
  
  Serial.println(x);
  Serial.print(y);
  Serial.print(z);
}

void color(int R,int A,int V){
  analogWrite(r, R);
  analogWrite(a, A);
  analogWrite(v, V);
  delay(200);}
