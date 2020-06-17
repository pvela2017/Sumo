int sen1=0;     //Izquierda Arriba
int sen2=1;     //Derecha Arriba
int sen3=2;     //Izquierda Abajo
int sen4=3;     //Derecha Abajo

int Val1=0;     // inicialización de Variables
int Val2=0;     // inicialización de Variables
int Val3=0;     // inicialización de Variables
int Val4=0;     // inicialización de Variables


void setup()
{
  
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  //pines de salida int
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}
  
  
  
  
void loop(){
  

      Val1 = analogRead(sen1);    //valor del sen1
      Val2 = analogRead(sen2);    //valor del sen2
      Val3 = analogRead(sen3);    //valor del sen3
      Val4 = analogRead(sen4);    //valor del sen4
      
      
      
       if (Val1 > 600) //Activa Primera Interrupcion
         { 
           digitalWrite(11,LOW);
         }
       else 
         {
           digitalWrite(11,HIGH);
         }
         
          if (Val2 > 600)//Activa Segunda Interrupcion
         { 
           digitalWrite(10,LOW);
         }
       else 
         {
           digitalWrite(10,HIGH);
         }
              if (Val3 > 600) //Activa Tercera Interrupcion
         { 
           digitalWrite(9,LOW);
         }
       else 
         {
           digitalWrite(9,HIGH); 
         }
           if (Val4 > 600)   //Activa Cuatro Interrupcion
         { 
           digitalWrite(8,LOW);
         }
       else 
         {
           digitalWrite(8,HIGH);
         }
         
}
