int buttonState = LOW;
int ultimoEstadoBoton = HIGH;
bool encendido = false;      

#define PIN_BOTON 4
#define LED1 2
#define LED2 3
#define LED3 5
#define LED4 6
#define LED5 7
#define LED6 8
#define LED7 9
#define LED8 10
#define LED9 11
#define LED10 12
#define TIEMPO_PASO 100
#define TIEMPO_REBOTE 200

int buttonState = 0;
int ultimoEstadoBoton = HIGH;
bool encendido = false;

void setup() {
 
  pinMode(PIN_BOTON, INPUT); 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
}

void loop() {
  buttonState = digitalRead(PIN_BOTON);
  if (buttonState == LOW && ultimoEstadoBoton == HIGH) {
    encendido = !encendido; 
    delay(TIEMPO_REBOTE);
  }
  
  ultimoEstadoBoton = buttonState;

  if (encendido) {
    digitalWrite(LED1, HIGH); delay(TIEMPO_PASO); digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH); delay(TIEMPO_PASO); digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH); delay(TIEMPO_PASO); digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH); delay(TIEMPO_PASO); digitalWrite(LED4, LOW);
    digitalWrite(LED5, HIGH); delay(TIEMPO_PASO); digitalWrite(LED5, LOW);
    digitalWrite(LED6, HIGH); delay(TIEMPO_PASO); digitalWrite(LED6, LOW);
    digitalWrite(LED7, HIGH); delay(TIEMPO_PASO); digitalWrite(LED7, LOW);
    digitalWrite(LED8, HIGH); delay(TIEMPO_PASO); digitalWrite(LED8, LOW);
    digitalWrite(LED9, HIGH); delay(TIEMPO_PASO); digitalWrite(LED9, LOW);
    digitalWrite(LED10, HIGH); delay(TIEMPO_PASO); digitalWrite(LED10, LOW);
  } 
  else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    digitalWrite(LED7, LOW);
    digitalWrite(LED8, LOW);
    digitalWrite(LED9, LOW);
    digitalWrite(LED10, LOW);
  }
}