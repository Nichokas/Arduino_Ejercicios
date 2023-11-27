int x=0;
int y=0;

void setup(){

  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, INPUT);
}

void loop(){
  if(digitalRead(2)==1){x=1}
  if(digitalRead(2)==0){x=0}
  if(x==1){
    for(x=4;x<10;x++){
        digitalWrite(x,1);
        delay(350);
        digitalWrite(x,0);
    }
    for(x=13;x>2;x=x-2){
        digitalWrite(x,0);
    }
}
}