#define PIN_LUZ  A3
#define PIN_LDR  A0
#define LED_ROJO 11
#define LED_VERDE 10
#define LED_AZUL 9

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LDR, INPUT);
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
}

void loop() {
  int lecturaLuz = analogRead(PIN_LDR);
  int porc_oscuridad = map(lecturaLuz, 0, 1023, 100, 0); 
  if (porc_oscuridad >= 30 && porc_oscuridad <= 70) {
    if (lecturaLuz > 90.0) {
      analogWrite(LED_ROJO, 255);
      analogWrite(LED_VERDE, 0);
      analogWrite(LED_AZUL, 0);
    } 
    else if (lecturaLuz < 18.0) {
      analogWrite(LED_ROJO, 0);
      analogWrite(LED_VERDE, 0);
      analogWrite(LED_AZUL, 255);
    } 
    else if (lecturaLuz >= 18.0 && lecturaLuz <= 90.0) {
      analogWrite(LED_ROJO, 0);
      analogWrite(LED_VERDE, 255);
      analogWrite(LED_AZUL, 0);
    }
    
  } else {
    analogWrite(LED_ROJO, 0);
    analogWrite(LED_VERDE, 0);
    analogWrite(LED_AZUL, 0);
  }

  delay(250);
}
