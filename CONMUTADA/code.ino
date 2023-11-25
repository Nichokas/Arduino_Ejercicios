int x=0;
  
void setup()
{
  pinMode(11,OUTPUT);
  pinMode(3,INPUT);
  pinMode(2,INPUT);
}

void loop()
{
  if(x==0){
  	if(digitalRead(3)==1){
    	digitalWrite(11,1);
    	x=1;}
  	if(digitalRead(2)==1){
    	digitalWrite(11,1);
    	x=1;}}
  
  if(x==1){
  	if(digitalRead(3)==1){
    	digitalWrite(11,0);
    	x=0;}
  	if(digitalRead(2)==1){
    	digitalWrite(11,0);
    	x=0;}}
}