const int PIN_BOTON = 4;
const int PIN_LED1  = 2;
const int PIN_LED2  = 3;
const int PIN_LED3  = 5;

int estado = 0;
int ultimoEstadoBoton = HIGH;

void setup() {
  pinMode(PIN_BOTON, INPUT_PULLUP);
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
}

void loop() {
  int lecturaBoton = digitalRead(PIN_BOTON);

  if (lecturaBoton == LOW && ultimoEstadoBoton == HIGH) {
    estado++;
    if (estado > 13) estado = 0;
    delay(50); 
  }
  ultimoEstadoBoton = lecturaBoton;

  digitalWrite(PIN_LED1, LOW);
  digitalWrite(PIN_LED2, LOW);
  digitalWrite(PIN_LED3, LOW);

  switch (estado) {
    case 0:
      digitalWrite(PIN_LED3, HIGH);
      break;
    case 2:
      digitalWrite(PIN_LED1, HIGH);
      digitalWrite(PIN_LED2, HIGH);
      break;
    case 4:
      digitalWrite(PIN_LED1, HIGH);
      break;
    case 6:
      digitalWrite(PIN_LED3, HIGH);
      digitalWrite(PIN_LED2, HIGH);
      break;
    case 8:
      digitalWrite(PIN_LED2, HIGH);
      break;
    case 10:
      digitalWrite(PIN_LED3, HIGH);
      digitalWrite(PIN_LED1, HIGH);
      digitalWrite(PIN_LED2, HIGH);
      break;
    case 12:
      digitalWrite(PIN_LED3, HIGH);
      digitalWrite(PIN_LED1, HIGH);
      break;
  }
}