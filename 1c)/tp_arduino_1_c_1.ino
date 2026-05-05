void setup()
{
  for (int pin = 2; pin <= 11; pin++)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  cambiarLeds(HIGH);
  delay(1000);
  cambiarLeds(LOW);
}

void cambiarLeds(int estado)
{
  if (estado == HIGH)
  {
    digitalWrite(11, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    
    digitalWrite(10, LOW);
    digitalWrite(8, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
  }
  else
  {
    digitalWrite(11, LOW);
    digitalWrite(9, LOW);
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    
    digitalWrite(10, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(2, HIGH);
  }
}