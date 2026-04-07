// C++ code
//
void setup()
{
  pinMode( 2 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
  pinMode( 7 , OUTPUT);
  pinMode( 8 , OUTPUT);
  pinMode( 9 , OUTPUT);
  pinMode( 10 , OUTPUT);
  pinMode( 11 , OUTPUT);
}

void loop()
{
  digitalWrite(10, true);
  delay(1500); 
  digitalWrite(10, false);
  delay(3400);
  digitalWrite(4, true);
  delay(1000); 
  digitalWrite(4, false);
  delay(1200); 
  digitalWrite(5, true);
  delay(2900); 
  digitalWrite(5, false);
  delay(8000);
  digitalWrite(6, true);
  delay(700);
  digitalWrite(6, false);
  delay(800); 
  digitalWrite(9, true);
  delay(6500); 
  digitalWrite(9, false);
  delay(6700);
  digitalWrite(11, true);
  delay(800); 
  digitalWrite(11, false);
  delay(900);
  digitalWrite(7, true);
  delay(9900); 
  digitalWrite(7, false);
  delay(8800);
  digitalWrite(3, true);
  delay(1800); 
  digitalWrite(3, false);
  delay(700);
  digitalWrite(8, true);
  delay(9000); 
  digitalWrite(8, false);
  delay(9200); 
  digitalWrite(2, true);
  delay(1200);
  digitalWrite(2, false);
  delay(4000); 


}