int idx = 0; unsigned long last;
#include "Images.h"
int Col[] = {1, 3, 13, 10, 11};
int Rig[] = {15, 14, 2, 12, 4, 5, 6};
int x, y;





void setup() {
  last = millis();

  pinMode( 1, OUTPUT ); //pin 1 lmatrix
  pinMode( 3, OUTPUT );// pin 3 lm
  pinMode( 13, OUTPUT );// pin 10 lm
  pinMode( 10, OUTPUT );// pin 7 lm
  pinMode( 11, OUTPUT );// pin 8 lm

  pinMode( 15, OUTPUT );// pin 12 lm
  pinMode( 14, OUTPUT );// pin 11 lm
  pinMode( 2, OUTPUT );// pin 2 lm
  pinMode( 12, OUTPUT );// pin 9 lm
  pinMode( 4, OUTPUT );// pin 4 lm
  pinMode( 5, OUTPUT );// pin 5 lm
  pinMode( 6, OUTPUT );// pin 6 lm

  digitalWrite(15, LOW);
  digitalWrite(14, LOW);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);

  digitalWrite(1, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
}


void pixel( int x, int y) {
  digitalWrite(Rig[x], HIGH);
  digitalWrite(Col[y], LOW);
  delayMicroseconds(50);
  digitalWrite(Rig[x], LOW);
  digitalWrite(Col[y], HIGH);
  delayMicroseconds(50);

}
void DrawFrame(byte frame [7][5]) {
  for (int a = 0; a < 7; a++) {
    for (int b = 0; b < 5; b++) {
      if (frame[a][b] == 1) {
        x = a;
        y = b;
        pixel(x, y);
      }
    }
  }
}

void loop() {

  DrawFrame(img);
}


