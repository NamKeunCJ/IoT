#define led_verd 13
void setup() {
  // put your setup code here, to run once:
  pinMode(led_verd,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    char opt=Serial.read();
    
    if(opt=='1'){
      digitalWrite(led_verd, HIGH);
      delay(5000);
      Serial.println("encendido");
    }else if(opt=='0'){
      digitalWrite(led_verd, LOW);
      Serial.println("apagado");
    }    
  }
}
