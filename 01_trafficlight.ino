// C++ code
//
void setup()
{
  for(int myLED=2;myLED<=4;myLED++){
    pinMode(myLED, OUTPUT);}
}

void loop()
{
  for(int myLED=2;myLED<5;myLED++){
  digitalWrite(myLED, HIGH);
  delay(1000);
    digitalWrite(myLED,LOW);
  }
  
}
