int x=0;

void setup(){
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, INPUT);
}

void loop(){
  if(digitalRead(3)==1){
    {
    for(x=3;x<14;x=x+2){
        digitalWrite(x,1);
        delay(2000);
    }
    for(x=13;x>2;x=x-2){
        digitalWrite(x,0);
    }
  }

}