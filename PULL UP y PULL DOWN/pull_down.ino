int x=0;

void setup(){
  pinMode(7, OUTPUT);
  pinMode(3, INPUT);
}

void loop(){
  digitalWrite(7, digitalRead(3));
}