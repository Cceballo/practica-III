/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: keypad
   Dev: carlos enrique ceballos
   Fecha: 20 de abril
*/

#include <Keypad.h>
#define filas_teclado 4
#define columnas_teclado 4
#define f1_teclado 9
#define f2_teclado 8
#define f3_teclado 7
#define f4_teclado 6
#define c1_teclado 5
#define c2_teclado 4
#define c3_teclado 3
#define c4_teclado 2
#define pina 10
#define pinb 11
#define pinc 12
#define pind 13
#define pine A1
#define pinf A2
#define ping A3
char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};
Keypad ceballos_teclado = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);

void setup()
{
pinMode(pina, OUTPUT);
pinMode(pinb, OUTPUT);
pinMode(pinc, OUTPUT);
pinMode(pind, OUTPUT);
pinMode(pine, OUTPUT);
pinMode(pinf, OUTPUT);
pinMode(ping, OUTPUT);
}
void loop()
{
  char tecla = ceballos_teclado.getKey();
  //Si alguna tecla ha sido presionada
  switch(tecla){
  
    case ('0'):
        
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
    break;
    
    case ('1'):
  digitalWrite (pina, LOW);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, LOW);
    
   delay(1000);
     digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    case ('2'):
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
      case ('3'):
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
      case ('4'):
      digitalWrite(pina, LOW);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
        case ('5'):
      digitalWrite(pina, HIGH); // NUMERO 5
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
        case ('6'):
      digitalWrite(pina, HIGH); // NUMERO 6
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
        case ('7'):
      digitalWrite(pina, HIGH); // NUMERO 7
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, LOW);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
     
        case ('8'):
      digitalWrite(pina, HIGH); // NUMERO 8
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
       case ('9'):
      digitalWrite(pina, HIGH); // NUMERO 9
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
       case ('A'):
      digitalWrite(pina, HIGH); // LETRA A
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
      case ('B'):
      digitalWrite(pina, LOW); // LETRA B
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
      case ('C'):
      digitalWrite(pina, HIGH); // LETRA C
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
       case ('D'):
      digitalWrite(pina, LOW); // LETRA D
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
      case ('*'):
      digitalWrite(pina, HIGH); // LETRA E
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
    
      case ('#'):
      digitalWrite(pina, HIGH); // LETRA F
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, LOW);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(1000);
    
    digitalWrite (pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
 break;
}
  }


  
