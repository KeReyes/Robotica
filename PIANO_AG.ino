/* programa Realizado por las bachilleres Maria Teresa Melendez
Keiry Merary Ayala Reyes, Tatiana Stefany Lopez Umana y Kenny Judith Machado
El codigo prendende dar inicio a la simulacion de las teclas de un
piano, que al acercarse a cierta distancia de nuestro conductor 
nos mande un sonido predeterminado a la bocina.

*/
#include <CapacitiveSensor.h>// incluimos la libreria que nos permitira utilizar las resistencias como sensores 


// definimos el pin trece para la bocina que conectaremos
#define speaker 13

CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);        // conectores de una resistencia en el pin 2 la patita que actuara como emisor y en el 5 como receptor
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);          // conectores de una resistencia en el pin 2 la patita que actuara como emisor y en el 6 como receptor
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);         // conectores de una resistencia en el pin 2 la patita que actuara como emisor y en el 7 como receptor
CapacitiveSensor   cs_2_8 = CapacitiveSensor(2,8);          // conectores de una resistencia en el pin 2 la patita que actuara como emisor y en el 8 como receptor
CapacitiveSensor   cs_2_9 = CapacitiveSensor(2,9);          // conectores de una resistencia en el pin 2 la patita que actuara como emisor y en el 9 como receptor
CapacitiveSensor   cs_2_10 = CapacitiveSensor(2,10);           // conectores de una resistencia en el pin 2 la patita que actuara como emisor y en el 10 como receptor
CapacitiveSensor   cs_2_11 = CapacitiveSensor(2,11);           // conectores de una resistencia en el pin 2 la patita que actuara como emisor y en el 11 como receptor


void setup()                    
{

   
  // Iniciamos el puerto serial para poder mostrar los resultados en la computado
  Serial.begin(9600);
}

void loop()                    
{
  // Ajustamos la sensibilidad en nuestro caso lo dejaremos a 30
 long total =  cs_2_5.capacitiveSensor(30); 
long total2 =  cs_2_6.capacitiveSensor(30);
long total3 =  cs_2_7.capacitiveSensor(30);
long total4 =  cs_2_8.capacitiveSensor(30);
long total5 =  cs_2_9.capacitiveSensor(30);
long total6 =  cs_2_10.capacitiveSensor(30);
long total7 =  cs_2_11.capacitiveSensor(30);

 // imprimimos el resultado que nos dan los sensores en el monitor serial
  Serial.print(total);                 
  Serial.print("\t");                    
  Serial.print(total2);                   
  Serial.print("\t");                    
 Serial.print(total3);                  
  Serial.print("\t");                    
 Serial.print(total4);                  
  Serial.print("\t");                    
    Serial.print(total5);                  
  Serial.print("\t");                  
 Serial.print(total6);                 
  Serial.print("\t");                   
 Serial.print(total7);                 
  Serial.print("\t");             
  Serial.print("\n");
  
  // Creamos unos If en donde decimos que cuando uno acerque la mano a nuestro conductor este activara el sonido
  // dependiendo de los valores que se nos imprimio en el serial fue que nosotros decidimos colocarle esos valores .
  if (total > 1000) tone(speaker,523);// colocamos  que si cumple la condicion en la salida del pin 13 o de la bocina que nos reprodusca un sonido similiar al de DO
if (total2 > 1000) tone(speaker,587);// colocamos  que si cumple la condicion en la salida del pin 13 o de la bocina que nos reprodusca un sonido similiar al de RE
if (total3 > 1000) tone(speaker,659);// colocamos  que si cumple la condicion en la salida del pin 13 o de la bocina que nos reprodusca un sonido similiar al de MI
if (total4 > 700) tone(speaker,698);// colocamos  que si cumple la condicion en la salida del pin 13 o de la bocina que nos reprodusca un sonido similiar al de FA
if (total5 > 900) tone(speaker,784);// colocamos  que si cumple la condicion en la salida del pin 13 o de la bocina que nos reprodusca un sonido similiar al de SOL
if (total6 > 900) tone(speaker,880);// colocamos  que si cumple la condicion en la salida del pin 13 o de la bocina que nos reprodusca un sonido similiar al de LA
if (total7 > 900) tone(speaker,988);// colocamos  que si cumple la condicion en la salida del pin 13 o de la bocina que nos reprodusca un sonido similiar al de SI

   if ((total<=1000)&&(total2<=1000)&&(total3<=1000)&&(total4<=700)&&(total5<=900)&&(total6<=900)&&(total7<=900))
    noTone(speaker); // colocamos  que si cumple la condicion este no emitira ningun tipo de sonido
  
                    
}


