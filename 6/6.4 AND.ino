//los dos presionados = 1
//uno presionado o ninguno = 0
int P1 = 10;
int P2 = 12;

void setup()
{
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
  Serial.begin(9600);
}

void loop(){
    if (P1 == 0 and P2 == 0){
        Serial.println("1");
    }

    if (P1 == 1 or P2 == 2){
        Serial.println("0");
    }
}