int fun=0;

int L1 = 10;
int L2 = 11;
int L3 = 12;

int P1 = 8;
int P2 = 7;
int P3 = 6;


void setup()
{
    pinMode(L1, OUTPUT);
    pinMode(L2, OUTPUT);
    pinMode(L3, OUTPUT);

    pinMode(P1, INPUT);
    pinMode(P2, INPUT);
    pinMode(P3, INPUT);

    Serial.begin(9600);
}

void loop()
{
    tablita(digitalRead(P1), digitalRead(P2), digitalRead(P3));

    Serial.println(fun);

    switch (fun){
        case 0:
        digitalWrite(L1,1);
        digitalWrite(L2,0);
        digitalWrite(L3,1);
        break;

        case 1:
        digitalWrite(L1,0);
        digitalWrite(L2,1);
        digitalWrite(L3,0);
        break;

        case 2:
        digitalWrite(L1,0);
        digitalWrite(L2,0);
        digitalWrite(L3,0);
        break;

        case 3:
        digitalWrite(L1,1);
        digitalWrite(L2,0);
        digitalWrite(L3,0);
        break;

        case 4:
        digitalWrite(L1,0);
        digitalWrite(L2,1);
        digitalWrite(L3,0);
        break;

        case 5:
        digitalWrite(L1,0);
        digitalWrite(L2,0);
        digitalWrite(L3,1);
        break;

        case 6:
        digitalWrite(L1,1);
        digitalWrite(L2,1);
        digitalWrite(L3,0);
        break;

        case 7:
        digitalWrite(L1,1);
        digitalWrite(L2,1);
        digitalWrite(L3,1);
        break;
    }
}

void tablita(int x,int y,int z){
    if (x==0 and y==0 and z==0){
        fun=0;}
    if (x==0 and y==0 and z==1){
        fun=1;}
    if (x==0 and y==1 and z==0){
        fun=2;}
    if (x==0 and y==1 and z==1){
        fun=3;}
 	if (x==1 and y==0 and z==0){
        fun=4;}
    if (x==1 and y==0 and z==1){
        fun=5;}
    if (x==1 and y==1 and z==0){
        fun=6;}
    if (x==1 and y==1 and z==1){
        fun=7;}
}