const int onTime = 1000;
const int offTime = 500;


 void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);   
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
   
  }
 void loop(){
  digitalWrite(4,HIGH);
  delay (onTime);
  digitalWrite(4,LOW);
  delay (offTime);
  digitalWrite(5,HIGH);
  delay (onTime);
  digitalWrite(5,LOW);  
  delay (offTime);
  digitalWrite(6,HIGH);
  delay (onTime);
  digitalWrite(6,LOW);
  delay (offTime);
  
//  Double mixed colors;
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay (onTime);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay (offTime);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay (onTime);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  delay (offTime); 
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay (onTime);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  delay (offTime);
   
  digitalWrite(7,HIGH);
  delay (onTime);
  digitalWrite(7,LOW);
  delay (offTime);
  digitalWrite(8,HIGH);
  delay (onTime);
  digitalWrite(8,LOW);
  delay (offTime);
  digitalWrite(9,HIGH);
  delay (onTime);
  digitalWrite(9,LOW);
  delay (offTime);
  
//  Double mixed colors;
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay (onTime);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay (offTime);
  digitalWrite(7,HIGH);
  digitalWrite(9,HIGH);
  delay (onTime);
  digitalWrite(7,LOW);
  digitalWrite(9,LOW);
  delay (offTime); 
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay (onTime);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay (offTime); 


  digitalWrite(10,HIGH);
  delay (onTime);
  digitalWrite(10,LOW);
  delay (offTime);
  digitalWrite(11,HIGH);
  delay (onTime);
  digitalWrite(11,LOW);
  delay (offTime);
  digitalWrite(12,HIGH);
  delay (onTime);
  digitalWrite(12,LOW);
  delay (offTime);
  
//  Double mixed colors;
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay (onTime);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay (offTime);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  delay (onTime);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  delay (offTime); 
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay (onTime);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay (offTime); 
  
 }

