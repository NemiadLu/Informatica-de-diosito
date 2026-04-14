  #define cangrejo A0
  #define TMP A5
  #define LDR A3
  #define LED_R 3
  #define LED_G 6	
  #define LED_B 5
  //#define MOSTRAR 
  //#define MOSTRARTEMP
  //#define MOSTRARLUZ
  //al de arriba se hace para habilitar lugares.
int POVIS;
float temp;
int luz;
// Para las resistencias comunes, utiliza 220 Ohm, no KOhm
void setup()
{
  pinMode(cangrejo, INPUT);
  pinMode(TMP, INPUT);
  pinMode(LDR, INPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  POVIS = analogRead(cangrejo);

  #ifdef MOSTRAR
    Serial.print("La resistencia es de:");
    Serial.println(POVIS);
  #endif
  // 0-255 Escritura
  // 0-1023 Lectura
  temp = (analogRead(TMP) * 5.0 / 1024) * 100 - 50;
  
  #ifdef MOSTRARTEMP
  Serial.print("Temp:");
  Serial.println(temp);
  #endif
  luz = (analogRead(LDR));
  //valores; map(Value, MinOG, MaxOG, MinNew, MaxNew);
  //luz = map(luz, 1, 310, 100, 0);
  int brillo = map(luz, 0, 1023, 255, 0); 
  
  analogWrite(LED_R, brillo);
  analogWrite(LED_G, brillo);
  analogWrite(LED_B, brillo);

  #ifdef MOSTRARLUZ
  Serial.print("Luz:");
  Serial.println(luz);
  //delay(1000);
  #endif
}