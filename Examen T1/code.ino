int x=0;
int y=0;

void setup(){
  for(x=4;x<10;x++){
    pinMode(x, OUTPUT);
  }
  pinMode(2, INPUT);
}

void loop(){
  if(digitalRead(2)==1){y=1;}
  if(digitalRead(2)==0){y=0;}
  if(y==1){
    for(x=4;x<10;x++){
        digitalWrite(x,1);
        delay(350);
        digitalWrite(x,0);
    }
  if(y==1){
    for(x=9;x>3;x--){
        digitalWrite(x,1);
        delay(350);
        digitalWrite(x,0);
    }
  }
  }
}