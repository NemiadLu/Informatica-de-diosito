// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT);
  pinMode( 5 , OUTPUT);
}

void loop()
{
  delay(300);
  digitalWrite(3, true);
  delay(300);
  digitalWrite(5, true);
  delay(300); 
  digitalWrite(3, false);
  delay(300);
  digitalWrite(3, true);
  delay(300);
  digitalWrite(5, false);
}