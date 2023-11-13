void setup()
{
  pinMode(13, OUTPUT); //Rojo semaforo
  pinMode(12, OUTPUT); //Amarillo semaforo
  pinMode(11, OUTPUT); //Verde semaforo
  pinMode(3, OUTPUT); //Verde peatones DERECHA
  pinMode(4, OUTPUT); //Rojo peatones DERECHA
  pinMode(5, OUTPUT); //Verde peatones IZQUIERDA
  pinMode(6, OUTPUT); //Rojo peatones IZQUIERDA
}

void loop()
{
    digitalWrite(13,1); //rojo coches
    digitalWrite(4,1);
    digitalWrite(6,1);
    delay(1000);

    digitalWrite(4,0);  //verde personas
    digitalWrite(6,0);
    digitalWrite(3,1);
    digitalWrite(5,1);
    delay(3000);

    digitalWrite(3,0); //parpadeo personas
    digitalWrite(5,0); 
    delay(250);
    digitalWrite(3,1);
    digitalWrite(5,1);
    delay(250);
    digitalWrite(3,0);
    digitalWrite(5,0); 
    delay(250);
    digitalWrite(3,1);
    digitalWrite(5,1);
    delay(250);
    digitalWrite(3,0);
    digitalWrite(5,0); 
    delay(250);
    digitalWrite(3,1);
    digitalWrite(5,1);
    delay(250);
    digitalWrite(3,0);
    digitalWrite(5,0); 
    delay(250);
    digitalWrite(3,1);
    digitalWrite(5,1);
    delay(250);
    digitalWrite(3,0); //peatones rojo
    digitalWrite(5,0);
    digitalWrite(4,1);
    digitalWrite(6,1);

    delay(1000);

    digitalWrite(13,0); //verde coches
    digitalWrite(11,1);
    delay(5000);

    digitalWrite(11,0); //amarillo coches
    digitalWrite(12,1);
    delay(2000);

    digitalWrite(12,0);

}