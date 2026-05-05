  #define cosito1 11
  #define cosito2 10
  #define cosito3 9
void setup()
{

  pinMode(cosito1 , OUTPUT);
  pinMode(cosito2 , OUTPUT);
  pinMode(cosito3 , OUTPUT);
}

void loop()
{

  digitalWrite(cosito1, true);
  delay(3000); 
  digitalWrite(cosito2, true); 
  delay(1000);
  digitalWrite(cosito1, false);
  digitalWrite(cosito2 , false);
  digitalWrite(cosito3 , true);
  delay(3000);
  digitalWrite(cosito3 , false);
  digitalWrite(cosito2 , true);
  delay(1000);
  digitalWrite(cosito2 , false);
}  