#include <avr/pgmspace.h>
int idx = 0; unsigned long last;
#include "Images.h"
int Col[] = {1, 3, 13, 10, 11};
int Rig[] = {15, 14, 2, 12, 4, 5, 6};
int x, y;
unsigned long lastMillis = 0;
int Frame = -1;
int count = 0;
const int buttonPin = 8;     // the number of the pushbutton pin
int lastDebounceTime = 0;
int debounceDelay = 50;
int buttonState;             // the current reading from the input pin
int lastButtonState = HIGH;




void setup() {

  pinMode(buttonPin, INPUT_PULLUP);

  for (int i = 0; i < 5; i++) {
    pinMode( Col[i], OUTPUT ); //pin 1 lmatrix
    digitalWrite(Col[i], HIGH);
  }
  for (int i = 0; i < 7; i++) {
    pinMode( Rig[i], OUTPUT ); //pin 1 lmatrix
    digitalWrite(Rig[i], LOW);
  }
}


void pixel( int x, int y) {
  digitalWrite(Rig[x], HIGH);
  digitalWrite(Col[y], LOW);
  delayMicroseconds(5);
  digitalWrite(Rig[x], LOW);
  digitalWrite(Col[y], HIGH);
  delayMicroseconds(5);

}

void DrawFrameCompact(const uint8_t* frame2) {
  for (int a = 0; a < 7; a++) {
    for (int b = 0; b < 5; b++) {
      if ( bitRead(pgm_read_byte(&frame2[a]), 7 - b) ) {
        pixel(a, b);
      }
    }
  }
}


void DrawAnimation(const uint8_t* frame2, int d, int velocit) {



  if (millis() - lastMillis > velocit) {
    if ( Frame < d-1 ) {
      Frame = Frame + 1;
    }
    else {
      Frame = 0;
    }
    lastMillis = millis();
  }
  for (int a = Frame * 7; a < (7 * Frame) + 7; a++) {
    for (int b = 0; b < 5; b++) {
      if ( bitRead(pgm_read_byte(&frame2[a]), 7 - b) ) { //pgm_read_byte(&frame2[a]) is used to read variables allocated in flash memory
        pixel(a - (Frame * 7), b);
      }
    }
  }
}



void loop() {

  int reading = digitalRead(buttonPin);
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;


      if (buttonState == LOW) {
        Frame=0;
        count++;
      }
    }
  }
  lastButtonState = reading;



  switch (count) {
    
    case 1:
      DrawAnimation(vertigo, 35, 50);
      break;

    case 2:
      DrawAnimation(barretta, 4, 50);
      break;

    case 3:
      DrawAnimation(pattern1, 2, 100);
      break;

     case 4:
      DrawAnimation(pattern2, 4, 100);
      break;

    case 5:
      DrawAnimation(heart, 6, 140);
      break;

    case 6:
      DrawAnimation(rain, 16, 100);
      break;

    case 7:
      DrawAnimation(operae, 7, 400);
      break;

    case 8:
      DrawAnimation(pinball, 30, 100);
      break;

    case 9:
      DrawAnimation(snake, 69, 60);
      break;


      
     case 10:
     count=1;
    break;

    
  }



}










