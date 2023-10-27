// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

int pos = 0;
int opc=0;
Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
  Serial.begin(9600);
}

void loop()
{
  servo_9.write(pos);
  
  if(Serial.available()>0){
    opc=Serial.read();    
    if(pos==0){
      if(opc=='1'){      
        for (pos = 0; pos <= 90; pos += 1) {
          servo_9.write(pos);
          delay(15); // Wait for 15 millisecond(s)
        }
        Serial.println("Puerta Abierta");
        pos=90;
      }else{      
        Serial.println("Tecla Incorrecta");
      } 
      
    }else if(pos==90){
      if(opc=='0'){
        for (pos = 90; pos >= 0; pos -= 1) {
          servo_9.write(pos);
          delay(15); // Wait for 15 millisecond(s)
        } 
        Serial.println("Puerta Cerrada");
        pos=0;
      }else{      
        Serial.println("Tecla Incorrecta");
      } 
    }   
  }
}