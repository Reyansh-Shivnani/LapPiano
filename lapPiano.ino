#include "pitches.h"

int C[] = {NOTE_C5};
int CS[] = {NOTE_CS5};
int D[] = {NOTE_D5};
int DS[] = {NOTE_DS5};
int E[] = {NOTE_E5};
int F[] = {NOTE_F5};
int FS[] = {NOTE_FS5};
int G[] = {NOTE_G5};
int GS[] = {NOTE_GS5};
int A[] = {NOTE_A5};
int AS[] = {NOTE_AS5};
int B[] = {NOTE_B5};
int CC[] = {NOTE_C6};
int duration(500);

void setup() {
  pinMode(11, OUTPUT); //Digital Pin 11 is where you connect your Buzzer
  Serial.begin(9600);
  Serial.println("Welcome to the Virtual Keyboard!");
  Serial.println("Notes: A-S-D-F-G-H-J");
  Serial.println("#: Q-W-E-R-T-Y-U");
}

void loop() {
  if (Serial.available()) {
    char ch = Serial.read();
    if (ch == 'a') {
    for (int Note = 0; Note < 1; Note++) {
      tone(11, C[Note], duration);
    }
    }
    if (ch == 'q') {
    for (int Note = 0; Note < 1; Note++) {
      tone(11, CS[Note], duration);
    }
    }
    if (ch == 's') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, D[Note], duration);
    }
    }
    if (ch == 'w') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, DS[Note], duration);
    }
    }
    if (ch == 'd') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, E[Note], duration);
    }
    }
    if (ch == 'f') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, F[Note], duration);
    }
    }
    if (ch == 'r') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, FS[Note], duration);
    }
    }
    if (ch == 'g') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, G[Note], duration);
    }
    }
    if (ch == 't') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, GS[Note], duration);
    }
    }
    if (ch == 'h') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, A[Note], duration);
    }
    }
    if (ch == 'y') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, AS[Note], duration);
    }
    }
    if (ch == 'j') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, B[Note], duration);
    }
    }
    if (ch == 'u') {
    for (int Note = 0; Note < 1; Note++) {
       tone(11, CC[Note], duration);
    }
    }
  }
}
