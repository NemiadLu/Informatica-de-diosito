#define TEMPO 120
#define PIN_BUZZER 8

#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523

const int melodyNotes[] = {
  NOTE_C4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_G4, NOTE_E4, NOTE_C4, 0,       NOTE_D4, NOTE_F4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_D4, 0,       NOTE_E4, NOTE_G4, NOTE_B4, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_E4, 0,       NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 
};

const int melodyFigures[] = {
  8,       8,       8,       8,       8,       8,       8,      -8,      8,       8,       8,       8,       8,       8,       8,      -8,      8,       8,       8,       8,       8,       8,       8,      -8,      16,      16,      16,      16,      16,      16,      16,      8       
};

const int longitudMelodia = 32;

void setup() {
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
  playMelody(melodyNotes, melodyFigures, longitudMelodia);
  pauseBetweenLoops(3); 
}

void playNote(int note, int duration) {
  if (note == 0) {
    delay(duration);
  } else {
    tone(PIN_BUZZER, note, duration);
    delay(duration);
    noTone(PIN_BUZZER);
  }
}

int cuadritosToDuration(int cuadritos) {
  int duracionRedonda = (60000 * 4) / TEMPO; 
  int absCuadritos = abs(cuadritos);         
  int duracionFigura = duracionRedonda / absCuadritos;
  return duracionFigura;
}

void playMelody(const int notes[], const int figures[], int length) {
  for (int i = 0; i < length; i++) {
    int duration = cuadritosToDuration(figures[i]);
    playNote(notes[i], duration);
    delay(20); 
  }
}

void pauseBetweenLoops(int seconds) {
  delay(seconds * 1000);
}

void convert3to2(const int melody3[][3], int len, int melody2[], int tempo) {
  int duracionRedonda = (60000 * 4) / tempo; 
  for(int i = 0; i < len; i++) {
    int duracion = melody3[i][1];
    int figuraCalculada = duracionRedonda / duracion;
    melody2[i] = figuraCalculada;
  }
}