int Red=13;
int PIR=2;
void setup(){
  pinMode(Red,OUTPUT);
  pinMode(PIR,INPUT);
  Serial.begin(9600);
}
void loop(){
  if(digitalRead(PIR)==HIGH){
    digitalWrite(Red,HIGH);
    Serial.println("Motion detected");
    delay(100);
  }
  else{
    digitalWrite(Red,LOW);
    Serial.println("Motion stopped");
    delay(100);
  }
}


