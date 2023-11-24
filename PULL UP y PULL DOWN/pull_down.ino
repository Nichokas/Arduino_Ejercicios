int x=0;

void setup(){
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop(){
  if(digitalRead(3)==1){
    digitalWrite(7,1);
  }
  else{
    digitalWrite(7,0);
  }
}