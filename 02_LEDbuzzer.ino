// C++ code
//
int aLED = 13;
int bLED = 12;
int cLED = 11;
int buzzer=7;
void setup(){
  pinMode(aLED , OUTPUT);
  pinMode(bLED , OUTPUT);
  pinMode(cLED , OUTPUT);
  pinMode(buzzer , OUTPUT);
}
void a(void){
  digitalWrite(aLED , HIGH);
  digitalWrite(bLED , LOW);
  digitalWrite(cLED , LOW);
  tone(buzzer,1000);
}
void b(void){
  digitalWrite(aLED , LOW);
  digitalWrite(bLED , HIGH);
  digitalWrite(cLED , LOW);
  tone(buzzer,750);
}
void c(void){
  digitalWrite(aLED , LOW);
  digitalWrite(bLED , LOW);
  digitalWrite(cLED , HIGH);
  tone(buzzer,500);
}
void loop(void){
  a();
  delay(1000);
  b();
  delay(1000);
  c();
  delay(1000);
}
  
