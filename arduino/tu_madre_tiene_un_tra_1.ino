// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT);
  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
}

void loop()
{
  digitalWrite(3, true);
  delay(3600);
  digitalWrite(5, true);
  delay(1000); 
  digitalWrite(3, false);
  digitalWrite(6, true);
  delay(3600); 
  digitalWrite(5, false);
  delay(3600);
  digitalWrite(5, true);
  delay(1100); 
  digitalWrite(6, false);
  digitalWrite(3, true);
  delay(1100);
  digitalWrite(5, false);
}
/*
  R + G     => amarillo
  R + B		=> magenta	
  B + G		=> cian
  R + G + B => blanco
  
  R > G => naranja
  G > R => verde limon
  R > B => Violeta
  B > R => fucsia
  G > B => Verde azuladado
  B > G => Celeste
  R - G - B  => tonos de grises*/