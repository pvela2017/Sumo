#include <Servo.h>
#define echostate 7
#define trigstate 8

long dur,dist;

Servo servo1;    //Servo Izquierda
Servo servo2;    //Servo Izquierda
Servo servo3;    //Servo Derecha
Servo servo4;    //Servo Dercha

void setup()
{
  
  //arduino mega
  pinMode(20,INPUT);
  pinMode(21,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  
  
  servo1.attach(10);
  servo2.attach(9);
  servo3.attach(6);
  servo4.attach(5);

  pinMode(trigstate,OUTPUT);
  pinMode(echostate,INPUT);
  

 // Asociamos la interrupción a nuestro código para los Sensores
  attachInterrupt(20,int1,FALLING); //interrupcion Sensor 1  pin2
  attachInterrupt(21,int2,FALLING); //interrupcion Sensor 2  pin3
  attachInterrupt(2,int3,FALLING); //interrupcion Sensor 3  pin1
  attachInterrupt(3,int4,FALLING); //interrupcion Sensor 4  pin0 
  
}

//Codigo para la interrupcion 1 Sensor Arriba Izquierda
void int1() {
     atras();    
}

//Codigo para la interrupcion 2 Sensor Arriba Derecha
void int2() {
      atras();
  }

// Codigo para la interrupcion 3 Sensor Abajo Izquierda
void int3() {
        adelante();
  }

//Codigo para la interrupcion 4 Sensor Abajo Derecha
void int4() {
      adelante();
  }




void adelante(){

 servo1.write(0);//izquierdo arriba
 servo2.write(0);//izquierdo abajo
 servo3.write(250);//derecho arriba
 servo4.write(250);//derecho abajo
 }
 
 void atras(){
   
 servo1.write(250);//izquierdo arriba
 servo2.write(250);//izquierdo abajo
 servo3.write(0);//derecho arriba
 servo4.write(0);//derecho abajo
 
 }

void derecha()
{
      servo1.write(80);//izquierdo arriba
      servo2.write(80);//izquierdo abajo
      servo3.write(90);//derecho arriba
      servo4.write(90);//derecho abajo
}

void izquierda()
{
      servo1.write(150);//izquierdo arriba
      servo2.write(150);//izquierdo abajo
      servo3.write(250);//derecho arriba
      servo4.write(250);//derecho abajo
}



void loop(){
  

      digitalWrite(trigstate,HIGH);
      delay(10);
      digitalWrite(trigstate,LOW);
  
      dur=pulseIn(echostate,HIGH);
      dist=dur/58;

      if( dist <= 45 )
      {
       //Hacia adelante
      servo1.write(0);//izquierdo arriba
      servo2.write(0);//izquierdo abajo
      servo3.write(255);//derecho arriba
      servo4.write(255);//derecho abajo
      }
       if ( dist > 45)
       {
         //Giro izquierda
         izquierda();
       }
      
      
  
}
