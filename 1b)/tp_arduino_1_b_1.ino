  #define cosito1 2
  #define cosito2 3
  #define cosito3 4
  #define cosito4 5
  #define cosito5 6
  #define cosito6 7
  #define cosito7 8
  #define cosito8 9
  #define cosito9 10
  #define cosito10 11

void setup()
{
  pinMode(cosito1, OUTPUT);
  pinMode(cosito2, OUTPUT);
  pinMode(cosito3, OUTPUT);
  pinMode(cosito4, OUTPUT);
  pinMode(cosito5, OUTPUT);
  pinMode(cosito6, OUTPUT);
  pinMode(cosito7, OUTPUT);
  pinMode(cosito8, OUTPUT);
  pinMode(cosito9, OUTPUT);
  pinMode(cosito10, OUTPUT);
}

void loop()
{
  digitalWrite(cosito5, true);
  delay(500);
  digitalWrite(cosito5, false);
  digitalWrite(cosito4, true);
  delay(500); 
  digitalWrite(cosito4, false);
  digitalWrite(cosito3, true);
  delay(500); 
  digitalWrite(cosito3, false);
  digitalWrite(cosito2, true);
  delay(500); 
  digitalWrite(cosito2, false);
  digitalWrite(cosito1, true);
  delay(500); 
  digitalWrite(cosito1, false);
  digitalWrite(cosito6, true);
  delay(500);
  digitalWrite(cosito6, false);
  digitalWrite(cosito7, true);
  delay(500); 
  digitalWrite(cosito7, false);
  digitalWrite(cosito8, true);
  delay(500); 
  digitalWrite(cosito8, false);
  digitalWrite(cosito9, true);
  delay(500); 
  digitalWrite(cosito9, false);
  digitalWrite(cosito10, true);
  delay(500); 
  digitalWrite(cosito10, false);  
}