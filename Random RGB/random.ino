int r=0;
int a=0;
int v=0;
int i;

void setup()
{
  for(i=9;i<12;i=i+1){
    pinMode(i, OUTPUT);}
  Serial.begin(9600);
}

void loop()
{
  r=random(255);
  a=random(255);
  v=random(255);
  
  color(r,a,v);
  
  Serial.println();
}

void color(int R,int A,int V){
  analogWrite(r, R);
  analogWrite(a, A);
  analogWrite(v, V);
  delay(200);}
