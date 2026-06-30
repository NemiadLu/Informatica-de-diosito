#include <LiquidCrystal.h>

#define MODO_NOCTURNO

#define PIN_LUZ  A1

LiquidCrystal LCD(5, 6, 10, 11, 12, 13);

void setup() {
  LCD.begin(16, 2);
}

void loop() {
  int lecturaLuz = analogRead(PIN_LUZ);
  int porcLuz = map(lecturaLuz, 0, 1023, 0, 100);
  
  
  delay(164);

  LCD.clear();

  #ifdef MODO_NOCTURNO
      LCD.setCursor(0,0);
      LCD.print(lecturaLuz);
  if (lecturaLuz > 0){
      LCD.setCursor(7,1);
      LCD.print("Encendido");
  }else{
      LCD.setCursor(9,1);
      LCD.print("Apagado");
  }
  #endif
  delay(164);
}