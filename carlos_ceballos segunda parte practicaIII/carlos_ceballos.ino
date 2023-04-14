
/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: barra led
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 14/04/2023
*/
void setup() 
{
 pinMode(2,OUTPUT); // pin dos
 pinMode(3,OUTPUT);//pin 3
 pinMode(4,OUTPUT);// pin 4
 pinMode(5,OUTPUT); // pin 5
 pinMode(6,OUTPUT); // pin 6
 pinMode(7,OUTPUT); // pin 7
 pinMode(8,OUTPUT); // pin 8
 pinMode(9,OUTPUT); // pin 9
 pinMode(10,OUTPUT); // pin 10
 pinMode(11,OUTPUT);// pin 11
 

}

void loop()  
{
 digitalWrite(2,HIGH);//1
 delay(50);
 digitalWrite(2,LOW);
 delay(10);
 
 digitalWrite(3,HIGH);// led 2 pin 3
 delay(50);
 digitalWrite(3,LOW);
 delay(10);
 
 digitalWrite(4,HIGH);//led 3 pin 4
 delay(50);
 digitalWrite(4,LOW);
 delay(10);
 
 digitalWrite(5,HIGH);//led 4 pin 5
 delay(50);
 digitalWrite(5,LOW);
 delay(10);
 
 digitalWrite(6,HIGH);//led 5 pin 6
 delay(50);
 digitalWrite(6,LOW);
 delay(10);
 
 digitalWrite(7,HIGH);//led 6 pin 7
 delay(50);
 digitalWrite(7,LOW);
 delay(10);
 
 digitalWrite(8,HIGH);// led 7 pin 8
 delay(50);
 digitalWrite(8,LOW);
 delay(10);
 
 digitalWrite(9,HIGH);//led 8 pin 9
 delay(50);
 digitalWrite(9,LOW);
 delay(10);
 
 digitalWrite(10,HIGH);// led 9 pin 10
 delay(50);
 digitalWrite(10,LOW);
 delay(10);
 
 digitalWrite(11,HIGH);// led 10 pin 11
 delay(50);
 digitalWrite(11,LOW);
 delay(10);

 digitalWrite(10,HIGH);//led 9 pin 10
 delay(50);
 digitalWrite(10,LOW);
 delay(10);
 
 digitalWrite(9,HIGH);//led 8 pin 9
 delay(50);
 digitalWrite(9,LOW);
 delay(10);
 
 digitalWrite(8,HIGH);// led 7 pin 8
 delay(50);
 digitalWrite(8,LOW);
 delay(10);
 
 digitalWrite(7,HIGH);//led 6 pin 7
 delay(50);
 digitalWrite(7,LOW);
 delay(10);
 
 digitalWrite(6,HIGH);// led 5 pin 6
 delay(50);
 digitalWrite(6,LOW);
 delay(10);
 digitalWrite(5,HIGH);// led 4 pin 5
 delay(50);
 digitalWrite(5,LOW);
 delay(10);
  digitalWrite(4,HIGH);//led 3 pin 4
 delay(50);
 digitalWrite(4,LOW);
 delay(10);
 
 digitalWrite(3,HIGH);// led 2 pin 3
 delay(50);
 digitalWrite(3,LOW);
 delay(10);
 digitalWrite(2,HIGH);//led 1 pin 2
 delay(50);
 digitalWrite(2,LOW);
 delay(10);
 
}
