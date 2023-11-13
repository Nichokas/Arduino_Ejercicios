int x = 0;
int y = 0;
int z = 1;
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if (z=1){
  	x = digitalRead(2);
  	if (x == 1){
  		y = y+1;
  }}
  if (x==0){
    delay(250);
      if (x==0){
    	z = 0;
    	for (int i = 1; i <= y; ++i){
        	digitalWrite(4,1);
        	delay(150);
        	digitalWrite(4,0);}
      }
    }
}