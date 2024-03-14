#define LED3 13
#define LED2 12
#define LED1 11
bool estado = false;
void main_menu(){
  Serial.println (":::MAIN MENU:::");  
  Serial.println ("1. Turn on led1");  
  Serial.println ("2. Turn on led2"); 
  Serial.println ("3. Turn on led3"); 
  Serial.println ("4. Turn off led1"); 
  Serial.println ("5. Turn off led2"); 
  Serial.println ("6. Turn off led3"); 
  Serial.println ("7. Turn on all leds"); 
  Serial.println ("8. Turn off all leds"); 
  Serial.println ("9. Leds flashing on"); 
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//Default 9600baudios
  pinMode(LED1,OUTPUT);//No Pin y Mode (OUTPUT/INPUT)
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  main_menu();
}

void loop() {  
   
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){  
    char opc = Serial.read();   
    if(opc == '1'){
      estado=false;
      digitalWrite(LED1, HIGH); 
    } else if( opc == '2'){
      estado=false;
      digitalWrite(LED2, HIGH); 
    }else if (opc == '3'){
      estado=false;
      digitalWrite(LED3, HIGH); 
    }else if( opc == '4'){
      estado=false;
      digitalWrite(LED1, LOW); 
    }else if (opc == '5'){
      estado=false;
      digitalWrite(LED2, LOW); 
    }else if (opc == '6'){
      estado=false;
      digitalWrite(LED3, LOW); 
    }else if (opc == '7'){
      estado=false;
      digitalWrite(LED1, HIGH); 
      digitalWrite(LED2, HIGH); 
      digitalWrite(LED3, HIGH); 
    }else if (opc == '8'){
      estado=false;
      digitalWrite(LED1, LOW); 
      digitalWrite(LED2, LOW); 
      digitalWrite(LED3, LOW);       
    } else  if (opc == '9'){ 
       estado= true;      
    }     
   }  
   if (estado){ 
      digitalWrite(LED1, HIGH); 
      digitalWrite(LED2, HIGH); 
      digitalWrite(LED3, HIGH); 
      delay(50); //1000=1 SEG
      digitalWrite(LED1, LOW); 
      digitalWrite(LED2, LOW); 
      digitalWrite(LED3, LOW); 
      delay(50); //1000=1 SEG   
    }  
  }  
