#include <Adafruit_NeoPixel.h>

#define PIN_BOTON 2
#define PIN_BUZZER 3
#define PIN_DADO1 4
#define PIN_DADO2 5

#define LEDS_POR_TIRA 4
#define TOTAL_LEDS (LEDS_POR_TIRA * 4)

Adafruit_NeoPixel dado1(TOTAL_LEDS, PIN_DADO1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel dado2(TOTAL_LEDS, PIN_DADO2, NEO_GRB + NEO_KHZ800);

void mostrarNumero(Adafruit_NeoPixel &strip, int numero, uint32_t color);
const bool patrones[6][4] = {
  { true, false, false, false },
  { true, true, false, false },
  { true, true, true, false },
  { true, true, true, true },
  { true, false, true, true },
  { true, true, true, true }
};

bool ultimoEstadoBoton = HIGH;
void mostrarNumero(Adafruit_NeoPixel &strip, int numero, uint32_t color) {
  strip.clear();
  if (numero >= 1 && numero <= 6) {
    for (int tira = 0; tira < 4; tira++) {
      if (patrones[numero - 1][tira]) {
        for (int i = 0; i < LEDS_POR_TIRA; i++) {
          strip.setPixelColor(tira * LEDS_POR_TIRA + i, color);
        }
      }
    }
  }
  strip.show();
}

void alarmaVictoria() {
  uint32_t colorVictoria = dado1.Color(0, 255, 0);
  for (int i = 0; i < 6; i++) {
    dado1.fill(colorVictoria);
    dado2.fill(colorVictoria);
    dado1.show();
    dado2.show();
    tone(PIN_BUZZER, 1200, 150);
    delay(180);

    dado1.clear();
    dado2.clear();
    dado1.show();
    dado2.show();
    tone(PIN_BUZZER, 600, 150);
    delay(180);
  }
  noTone(PIN_BUZZER);
}

void setup() {
  pinMode(PIN_BOTON, INPUT_PULLUP);
  pinMode(PIN_BUZZER, OUTPUT);
  randomSeed(analogRead(A0));

  dado1.begin();
  dado2.begin();
  dado1.show();
  dado2.show();
}

void loop() {
  bool estadoBoton = digitalRead(PIN_BOTON);

  if (ultimoEstadoBoton == HIGH && estadoBoton == LOW) {
    delay(50);

    int val1 = 0;
    int val2 = 0;

    for (int i = 0; i < 15; i++) {
      val1 = random(1, 7);
      val2 = random(1, 7);
      mostrarNumero(dado1, val1, dado1.Color(0, 100, 255));
      mostrarNumero(dado2, val2, dado2.Color(0, 100, 255));
      delay(30 + (i * 8));
    }

    val1 = random(1, 7);
    val2 = random(1, 7);
    mostrarNumero(dado1, val1, dado1.Color(255, 255, 255));
    mostrarNumero(dado2, val2, dado2.Color(255, 255, 255));

    if (val1 + val2 == 7) {
      alarmaVictoria();
      mostrarNumero(dado1, val1, dado1.Color(255, 255, 255));
      mostrarNumero(dado2, val2, dado2.Color(255, 255, 255));
    }
  }

  ultimoEstadoBoton = estadoBoton;
}