int x=0;

void setup(){
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop(){
  x = digitalRead(3);

  for(x==1){
    digitalWrite(7,1);
  }

  for(x==0){
    digitalWrite(7,0);
  }
}