int led=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);//No Pin y Mode (OUTPUT/INPUT)

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(200); //1000=1 SEG
  digitalWrite(led,LOW);
  delay(200);
  

}
