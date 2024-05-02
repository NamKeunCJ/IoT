// C++ code
// Maria Camila Rueda Prado - Juan Esteban Tiraca - Juan Pablo Lopez - David Esteban Pantoja
int led4_rojo=11;
int led4_amarillo=12;
int led4_verde=13;

int led3_rojo=8;
int led3_amarillo=9;
int led3_verde=10;

int led2_rojo=5;
int led2_amarillo=6;
int led2_verde=7;

int led1_rojo=2;
int led1_amarillo=3;
int led1_verde=4;

int t= 3000;

void setup()
{
  pinMode(led1_rojo, OUTPUT);
  pinMode(led1_verde, OUTPUT);
  pinMode(led1_amarillo, OUTPUT);
  pinMode(led2_rojo, OUTPUT);
  pinMode(led2_verde, OUTPUT);
  pinMode(led2_amarillo, OUTPUT);
  pinMode(led3_rojo, OUTPUT);
  pinMode(led3_verde, OUTPUT);
  pinMode(led3_amarillo, OUTPUT);
  pinMode(led4_rojo, OUTPUT);
  pinMode(led4_verde, OUTPUT);
  pinMode(led4_amarillo, OUTPUT);
  
  digitalWrite(led1_rojo, LOW);
  digitalWrite(led1_amarillo, LOW);
  digitalWrite(led1_verde, LOW);
  digitalWrite(led2_rojo, LOW);
  digitalWrite(led2_amarillo, LOW);
  digitalWrite(led2_verde, LOW);
  digitalWrite(led3_rojo, LOW);
  digitalWrite(led3_amarillo, LOW);
  digitalWrite(led3_verde, LOW);
  digitalWrite(led4_rojo, LOW);
  digitalWrite(led4_amarillo, LOW);
  digitalWrite(led4_verde, LOW);
}

void loop()
{
  
  digitalWrite(led1_verde, HIGH);//
  digitalWrite(led3_verde, HIGH);//
  digitalWrite(led2_rojo, HIGH);//
  digitalWrite(led4_rojo, HIGH);//
  delay(t);
  digitalWrite(led1_verde, LOW);//
  digitalWrite(led3_verde, LOW);//
  digitalWrite(led2_rojo, LOW);//
  digitalWrite(led4_rojo, LOW);//
  digitalWrite(led1_amarillo, HIGH);//
  digitalWrite(led3_amarillo, HIGH);//
  digitalWrite(led2_amarillo, HIGH);//
  digitalWrite(led4_amarillo, HIGH);//
  delay(t);
  digitalWrite(led1_amarillo, LOW);//
  digitalWrite(led3_amarillo, LOW);//
  digitalWrite(led2_amarillo, LOW);//
  digitalWrite(led4_amarillo, LOW);//
  digitalWrite(led1_rojo, HIGH);//
  digitalWrite(led3_rojo, HIGH);//
  digitalWrite(led2_verde, HIGH);//
  digitalWrite(led4_verde, HIGH);//
  delay(t);
  digitalWrite(led1_rojo, LOW);//
  digitalWrite(led2_verde, LOW);//
  digitalWrite(led4_verde, LOW);//
  digitalWrite(led1_amarillo, HIGH);//
  digitalWrite(led2_amarillo, HIGH);//
  digitalWrite(led4_amarillo, HIGH);//  
  delay(t);
  digitalWrite(led1_amarillo, LOW);//
  digitalWrite(led2_amarillo, LOW);//
  digitalWrite(led4_amarillo, LOW);//  
  digitalWrite(led1_verde, HIGH);//
  digitalWrite(led2_rojo, HIGH);//
  digitalWrite(led4_rojo, HIGH);//
  delay(t);
  digitalWrite(led1_verde, LOW);//
  digitalWrite(led2_rojo, LOW);//
  digitalWrite(led1_amarillo, HIGH);//
  digitalWrite(led2_amarillo, HIGH);//
  delay(t);
  digitalWrite(led1_amarillo, LOW);//
  digitalWrite(led2_amarillo, LOW);//  
  digitalWrite(led1_rojo, HIGH);//
  digitalWrite(led2_verde, HIGH);//
  delay(t);
  digitalWrite(led2_verde, LOW);//
  digitalWrite(led3_rojo, LOW);//
  digitalWrite(led2_amarillo, HIGH);//
  digitalWrite(led3_amarillo, HIGH);//
  delay(t);
  digitalWrite(led2_amarillo, LOW);//
  digitalWrite(led3_amarillo, LOW);//
  digitalWrite(led2_rojo, HIGH);//
  digitalWrite(led3_verde, HIGH);//
  delay(t);
  digitalWrite(led4_rojo, LOW);//
  digitalWrite(led3_verde, LOW);//
  digitalWrite(led3_amarillo, HIGH);//
  digitalWrite(led4_amarillo, HIGH);//
  delay(t);
  digitalWrite(led3_amarillo, LOW);//
  digitalWrite(led4_amarillo, LOW);//
  digitalWrite(led3_rojo, HIGH);//
  digitalWrite(led4_verde, HIGH);//
  delay(t);
  digitalWrite(led1_rojo, LOW);//
  digitalWrite(led3_rojo, LOW);//
  digitalWrite(led4_verde, LOW);//
  digitalWrite(led3_amarillo, HIGH);//
  digitalWrite(led4_amarillo, HIGH);//
  digitalWrite(led1_amarillo, HIGH);//
  delay(t);
  digitalWrite(led3_amarillo, LOW);//
  digitalWrite(led4_amarillo, LOW);//  
  digitalWrite(led1_amarillo, LOW);//
}
