int Gbutton = 2;
int Ebutton = 3;
int Cbutton = 4;

int led = 13;

int Gstate = 0;
int Estate = 0;
int buzzer = 5;

#include "pitches.h"


int melody[] = { NOTE_G3, NOTE_E4, NOTE_C4 };

void setup() {
//  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(int); thisNote++) {
//  
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
//      int noteDuration = 1000 / 4;
//      tone(buzzer, melody[thisNote], noteDuration);
  
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
//      int pauseBetweenNotes = noteDuration * 1.30;
//      delay(pauseBetweenNotes);
      // stop the tone playing:
//      noTone(buzzer);
//    }
  pinMode(Gbutton,INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(96000);

}

void loop() {
  // put your main code here, to run repeatedly:
  Gstate = digitalRead(Gbutton);
  Estate = digitalRead(Ebutton);
  Serial.println(Gstate);
//  Serial.println("E" + Estate);
  if (Gstate == 1) {
    tone(buzzer, NOTE_G3, 1000);
  }
  else if (Estate == 1) {
    tone(buzzer, NOTE_E4, 1000);
  }
  else {
    noTone(buzzer);
  }

}



