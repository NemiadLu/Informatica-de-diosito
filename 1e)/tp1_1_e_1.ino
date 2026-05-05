int ledA1 = 0;
int ledA2 = 1;
int ledA3 = 2;

int ledB1 = 4;
int ledB2 = 5;
int ledB3 = 6;

void setup() {
  pinMode(ledA1, OUTPUT);
  pinMode(ledA2, OUTPUT);
  pinMode(ledA3, OUTPUT);
  
  pinMode(ledB1, OUTPUT);
  pinMode(ledB2, OUTPUT);
  pinMode(ledB3, OUTPUT);
}

void loop() {
  secuenciaGrupoA();
  secuenciaGrupoB();
}

void secuenciaGrupoA() {
  digitalWrite(ledA1, HIGH);
  delay(500);
  digitalWrite(ledA1, LOW);
  delay(500);

  digitalWrite(ledA2, HIGH);
  digitalWrite(ledA3, HIGH);
  delay(500);
  digitalWrite(ledA2, LOW);
  digitalWrite(ledA3, LOW);
  delay(500);

  digitalWrite(ledA3, HIGH);
  delay(500);
  digitalWrite(ledA3, LOW);
  delay(500);

  digitalWrite(ledA2, HIGH);
  digitalWrite(ledA1, HIGH);
  delay(500);
  digitalWrite(ledA2, LOW);
  digitalWrite(ledA1, LOW);
  delay(500);

  digitalWrite(ledA2, HIGH);
  delay(500);
  digitalWrite(ledA2, LOW);
  delay(500);

  digitalWrite(ledA1, HIGH);
  digitalWrite(ledA2, HIGH);
  digitalWrite(ledA3, HIGH);
  delay(500);
  digitalWrite(ledA1, LOW);
  digitalWrite(ledA2, LOW);
  digitalWrite(ledA3, LOW);
  delay(500);

  digitalWrite(ledA1, HIGH);
  digitalWrite(ledA3, HIGH);
  delay(500);
  digitalWrite(ledA1, LOW);
  digitalWrite(ledA3, LOW);
  delay(500);
}

void secuenciaGrupoB() {
  digitalWrite(ledB1, HIGH);
  delay(500);
  digitalWrite(ledB1, LOW);
  delay(500);

  digitalWrite(ledB2, HIGH);
  digitalWrite(ledB3, HIGH);
  delay(500);
  digitalWrite(ledB2, LOW);
  digitalWrite(ledB3, LOW);
  delay(500);

  digitalWrite(ledB3, HIGH);
  delay(500);
  digitalWrite(ledB3, LOW);
  delay(500);

  digitalWrite(ledB2, HIGH);
  digitalWrite(ledB1, HIGH);
  delay(500);
  digitalWrite(ledB2, LOW);
  digitalWrite(ledB1, LOW);
  delay(500);

  digitalWrite(ledB2, HIGH);
  delay(500);
  digitalWrite(ledB2, LOW);
  delay(500);

  digitalWrite(ledB1, HIGH);
  digitalWrite(ledB2, HIGH);
  digitalWrite(ledB3, HIGH);
  delay(500);
  digitalWrite(ledB1, LOW);
  digitalWrite(ledB2, LOW);
  digitalWrite(ledB3, LOW);
  delay(500);

  digitalWrite(ledB1, HIGH);
  digitalWrite(ledB3, HIGH);
  delay(500);
  digitalWrite(ledB1, LOW);
  digitalWrite(ledB3, LOW);
  delay(500);
}