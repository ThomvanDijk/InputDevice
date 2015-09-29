 //Led indicates hit.
#define LED 6  //Pin 6.

//Player1.
#define P1_1 40  //Pin 40.
#define P1_2 41  //Pin 41.
#define P1_3 42  //Pin 42.
#define P1_4 43  //Pin 43.
#define P1_5 44  //Pin 44.
#define P1_6 45  //Pin 45.

#define P1_L 38  //Left hand.
#define P1_R 39  //Right hand.

//Player2.
#define P2_1 12  //Pin 12.
#define P2_2 13  //Pin 13.
#define P2_3 14  //Pin 14.
#define P2_4 15  //Pin 15.
#define P2_5 16  //Pin 16.
#define P2_6 17  //Pin 17.

#define P2_L 11  //Left hand.
#define P2_R 10  //Right hand.

//Player1.
boolean hit_P1_1;  //Q Left upperarm.
boolean hit_P1_2;  //w Right upperarm.
boolean hit_P1_3;  //E Left shoulder.
boolean hit_P1_4;  //S Right shoulder.
boolean hit_P1_5;  //U Right side.
boolean hit_P1_6;  //I Left side.

//Player2.
boolean hit_P2_1;  //Y Left upperarm.
boolean hit_P2_2;  //T Right upperarm.
boolean hit_P2_3;  //A Left shoulder.
boolean hit_P2_4;  //D Right shoulder.
boolean hit_P2_5;  //O Right side.
boolean hit_P2_6;  //P Left side.

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  
  //Player1.
  pinMode(P1_1, INPUT_PULLUP);
  pinMode(P1_2, INPUT_PULLUP);
  pinMode(P1_3, INPUT_PULLUP);
  pinMode(P1_4, INPUT_PULLUP);
  pinMode(P1_5, INPUT_PULLUP);
  pinMode(P1_6, INPUT_PULLUP);
  
  pinMode(P1_L, OUTPUT);
  pinMode(P1_R, OUTPUT);
  
  //Player2.
  pinMode(P2_1, INPUT_PULLUP);
  pinMode(P2_2, INPUT_PULLUP);
  pinMode(P2_3, INPUT_PULLUP);
  pinMode(P2_4, INPUT_PULLUP);
  pinMode(P2_5, INPUT_PULLUP);
  pinMode(P2_6, INPUT_PULLUP);
  
  pinMode(P2_L, OUTPUT);
  pinMode(P2_R, OUTPUT);

  if (digitalRead(P1_1) || digitalRead(P1_2) || digitalRead(P1_3)) {
    hit_P1_1 = false;
    hit_P1_2 = false;
    hit_P1_3 = false;
  }
  if (digitalRead(P1_4) || digitalRead(P1_5) || digitalRead(P1_6)) {
    hit_P1_4 = false;
    hit_P1_5 = false;
    hit_P1_6 = false;
  }
  if (digitalRead(P2_1) || digitalRead(P2_2) || digitalRead(P2_3)) {
    hit_P2_1 = false;
    hit_P2_2 = false;
    hit_P2_3 = false;
  }
  if (digitalRead(P2_4) || digitalRead(P2_5) || digitalRead(P2_6)) {
    hit_P2_4 = false;
    hit_P2_5 = false;
    hit_P2_6 = false;
  }
  
  else {
    //Player1.
    hit_P1_1 = false;
    hit_P1_2 = false;
    hit_P1_3 = false;
    hit_P1_4 = false;
    hit_P1_5 = false;
    hit_P1_6 = false;
    
    //Player2.
    hit_P2_1 = false;
    hit_P2_2 = false;
    hit_P2_3 = false;
    hit_P2_4 = false;
    hit_P2_5 = false;
    hit_P2_6 = false;
  }
}

void loop() {
  digitalWrite(P1_L, HIGH);
  digitalWrite(P1_R, LOW);
  digitalWrite(P2_L, HIGH);
  digitalWrite(P2_R, LOW);
  
  checkInputs();
  
  digitalWrite(P1_L, LOW);
  digitalWrite(P1_R, HIGH);
  digitalWrite(P2_L, LOW);
  digitalWrite(P2_R, HIGH);
  
  checkInputs();
}

void checkInputs() {
  
  //Player 2 hits player 1 with his left hand.
  if(!digitalRead(P1_1) && digitalRead(P2_L)) {
    if(!hit_P1_1) {
      hit_P1_1 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_CTRL);
      Keyboard.set_key1(KEY_Q);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_2) && digitalRead(P2_L)) {
    if(!hit_P1_2) {
      hit_P1_2 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_CTRL);
      Keyboard.set_key1(KEY_W);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_3) && digitalRead(P2_L)) {
    if(!hit_P1_3) {
      hit_P1_3 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_CTRL);
      Keyboard.set_key1(KEY_E);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_4) && digitalRead(P2_L)) {
    if(!hit_P1_4) {
      hit_P1_4 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_CTRL);
      Keyboard.set_key1(KEY_S);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_5) && digitalRead(P2_L)) {
    if(!hit_P1_5) {
      hit_P1_5 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_CTRL);
      Keyboard.set_key1(KEY_U);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_6) && digitalRead(P2_L)) {
    if(!hit_P1_6) {
      hit_P1_6 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_CTRL);
      Keyboard.set_key1(KEY_I);
      Keyboard.send_now();
    }
  }
  else {
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
    
    if(hit_P1_1) {
      hit_P1_1 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_2) {
      hit_P1_2 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_3) {
      hit_P1_3 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_4) {
      hit_P1_4 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_5) {
      hit_P1_5 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_6) {
      hit_P1_6 = false;
      digitalWrite(LED, LOW);
    }
  }
  
  //Player 2 hits player 1 with his left hand.
  if(!digitalRead(P1_1) && digitalRead(P2_L)) {
    if(!hit_P1_1) {
      hit_P1_1 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_LEFT_CTRL);
      Keyboard.set_key1(KEY_Q);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_2) && digitalRead(P2_L)) {
    if(!hit_P1_2) {
      hit_P1_2 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_LEFT_CTRL);
      Keyboard.set_key1(KEY_W);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_3) && digitalRead(P2_L)) {
    if(!hit_P1_3) {
      hit_P1_3 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_LEFT_CTRL);
      Keyboard.set_key1(KEY_E);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_4) && digitalRead(P2_L)) {
    if(!hit_P1_4) {
      hit_P1_4 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_LEFT_CTRL);
      Keyboard.set_key1(KEY_S);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_5) && digitalRead(P2_L)) {
    if(!hit_P1_5) {
      hit_P1_5 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_LEFT_CTRL);
      Keyboard.set_key1(KEY_U);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_6) && digitalRead(P2_L)) {
    if(!hit_P1_6) {
      hit_P1_6 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_LEFT_CTRL);
      Keyboard.set_key1(KEY_I);
      Keyboard.send_now();
    }
  }
  
  //Player 2 hits player 1 with his right hand.
  if(!digitalRead(P1_1) && digitalRead(P2_R)) {
    if(!hit_P1_1) {
      hit_P1_1 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_CTRL);
      Keyboard.set_key1(KEY_Q);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_2) && digitalRead(P2_R)) {
    if(!hit_P1_2) {
      hit_P1_2 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_CTRL);
      Keyboard.set_key1(KEY_W);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_3) && digitalRead(P2_R)) {
    if(!hit_P1_3) {
      hit_P1_3 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_CTRL);
      Keyboard.set_key1(KEY_E);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_4) && digitalRead(P2_R)) {
    if(!hit_P1_4) {
      hit_P1_4 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_CTRL);
      Keyboard.set_key1(KEY_S);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_5) && digitalRead(P2_R)) {
    if(!hit_P1_5) {
      hit_P1_5 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_CTRL);
      Keyboard.set_key1(KEY_U);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P1_6) && digitalRead(P2_R)) {
    if(!hit_P1_6) {
      hit_P1_6 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_CTRL);
      Keyboard.set_key1(KEY_I);
      Keyboard.send_now();
    }
  }
  
  //Player 1 hits player 2 with his left hand.
  if(!digitalRead(P2_1) && digitalRead(P1_L)) {
    if(!hit_P2_1) {
      hit_P2_1 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_Q);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_2) && digitalRead(P1_L)) {
    if(!hit_P2_2) {
      hit_P2_2 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_W);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_3) && digitalRead(P1_L)) {
    if(!hit_P2_3) {
      hit_P2_3 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_E);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_4) && digitalRead(P1_L)) {
    if(!hit_P2_4) {
      hit_P2_4 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_S);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_5) && digitalRead(P1_L)) {
    if(!hit_P2_5) {
      hit_P2_5 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_U);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_6) && digitalRead(P1_L)) {
    if(!hit_P2_6) {
      hit_P2_6 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_I);
      Keyboard.send_now();
    }
  }
  
  //Player 1 hits player 2 with his right hand.
  if(!digitalRead(P2_1) && digitalRead(P1_R)) {
    if(!hit_P2_1) {
      hit_P2_1 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_Q);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_2) && digitalRead(P1_R)) {
    if(!hit_P2_2) {
      hit_P2_2 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_W);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_3) && digitalRead(P1_R)) {
    if(!hit_P2_3) {
      hit_P2_3 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_E);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_4) && digitalRead(P1_R)) {
    if(!hit_P2_4) {
      hit_P2_4 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_S);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_5) && digitalRead(P1_R)) {
    if(!hit_P2_5) {
      hit_P2_5 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_U);
      Keyboard.send_now();
    }
  }
  if(!digitalRead(P2_6) && digitalRead(P1_R)) {
    if(!hit_P2_6) {
      hit_P2_6 = true;
      digitalWrite(LED, HIGH);
      Keyboard.set_modifier(MODIFIERKEY_RIGHT_ALT);
      Keyboard.set_key1(KEY_I);
      Keyboard.send_now();
    }
  }
  
  else {
    Keyboard.set_modifier(0);
    Keyboard.set_key1(0);
    Keyboard.send_now();
    
    //Player 1.
    if(hit_P1_1) {
      hit_P1_1 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_2) {
      hit_P1_2 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_3) {
      hit_P1_3 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_4) {
      hit_P1_4 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_5) {
      hit_P1_5 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P1_6) {
      hit_P1_6 = false;
      digitalWrite(LED, LOW);
    }
    
    //Player 2.
    if(hit_P2_1) {
      hit_P2_1 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P2_2) {
      hit_P2_2 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P2_3) {
      hit_P2_3 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P2_4) {
      hit_P2_4 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P2_5) {
      hit_P2_5 = false;
      digitalWrite(LED, LOW);
    }
    if(hit_P2_6) {
      hit_P2_6 = false;
      digitalWrite(LED, LOW);
    }
  }
}
