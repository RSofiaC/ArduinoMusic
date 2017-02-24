//This is a code meant for the Arduino Leonardo connected through USB port working as keyboard with the computer (hence the Keyboard library is required)


#include <Keyboard.h>

// set pin numbers for the five bttons:
char arr = KEY_UP_ARROW;
char der = KEY_RIGHT_ARROW;
char aba = KEY_DOWN_ARROW;
char izq = KEY_LEFT_ARROW;
char bac = KEY_BACKSPACE;
char esc = KEY_ESC;

//need to check when the button is being pressed and realeased
bool ArrUp = LOW;
bool AbaUp = LOW;
bool DerUp = LOW;
bool IzqUp = LOW;
bool BacUp = LOW;
bool EscUp = LOW;

void setup() {
 // initialize the buttons' inputs:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);

 //vibratig motor for haptic signal pin
  pinMode(8,OUTPUT);
  int Lola = analogRead (8);

  Serial.begin(9600);
  //initialize keyboard control
  Keyboard.begin();
}

void loop() {

//If a pin gets activated it checks if there is any other button being pressed and if there isnt then it acts, once it is clicked it realeses again <?
  if (digitalRead(2) == HIGH) {
  digitalWrite (8, HIGH);
  if (ArrUp == LOW) {
  //press
  Keyboard.press(arr);
  ArrUp = HIGH;
  delay (50);
  }
  }else{
  digitalWrite (8, LOW);
  if(ArrUp == HIGH){
  //releasing
  Keyboard.releaseAll();
  ArrUp = LOW;
  }
  }

  if (digitalRead(3) == HIGH) {
  digitalWrite (8, HIGH);
  if (AbaUp == LOW) {
  //press
  Keyboard.press(aba);
  AbaUp = HIGH;
  delay (50);
  }
  }else{
  digitalWrite (8, LOW);
  if(AbaUp == HIGH){
  //releasing
  Keyboard.releaseAll();
  AbaUp = LOW;
  }
  }

if (digitalRead(4) == HIGH) {
  digitalWrite (8, HIGH);
  if (DerUp == LOW) {
  //press
  Keyboard.press(der);
  DerUp = HIGH;
  delay (50);
  }
  }else{
  digitalWrite (8, LOW);
  if(DerUp == HIGH){
  //releasing
  Keyboard.releaseAll();
  DerUp = LOW;
  }
  }

if (digitalRead(5) == HIGH) {
  digitalWrite (8, HIGH);
  if (IzqUp == LOW) {
  //press
  Keyboard.press(izq);
  IzqUp = HIGH;
  delay (50);
  }
  }else{
  digitalWrite (8, LOW);
  if(IzqUp == HIGH){
  //releasing
  Keyboard.releaseAll();
  IzqUp = LOW;
  }
  }

if (digitalRead(6) == HIGH) {
  digitalWrite (8, HIGH);
  if (BacUp == LOW) {
  //press
  Keyboard.press(bac);
  BacUp = HIGH;
  delay (50);
  }
  }else{
  digitalWrite (8, LOW);
  if(BacUp == HIGH){
  //releasing
  Keyboard.releaseAll();
  BacUp = LOW;
  }
  }
if (digitalRead(7) == HIGH) {
  digitalWrite (8, HIGH);
  if (EscUp == LOW) {
  //press
  Keyboard.press(esc);
  EscUp = HIGH;
  delay (50);
  }
  }else{
  digitalWrite (8, LOW);
  if(EscUp == HIGH){
  //releasing
  Keyboard.releaseAll();
  EscUp = LOW;
  }
  }
}
