const int PIN_ENTRADA = A0;
const int PIN_SALIDA  = A1;

void setup() {
  pinMode(PIN_ENTRADA, INPUT);
  pinMode(PIN_SALIDA, OUTPUT);
}

void loop() {
  if (digitalRead(PIN_ENTRADA) == HIGH) {
    digitalWrite(PIN_SALIDA, HIGH);
    delay(500);
    digitalWrite(PIN_SALIDA, LOW);
    delay(500);
  } else {
    digitalWrite(PIN_SALIDA, LOW);
  }
}