int x=0;

void setup(){
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop(){
  x = digitalRead(3);

  for(x;x>0;x){
    digitalWrite(7,1);
  }

  for(x;x<1;x){
    digitalWrite(7,0);
  }
}