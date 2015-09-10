//Led indicates hit.
#define LED 6  //Pin 6.

//Player1.
#define P1_1 40  //Pin 40.
#define P1_2 41  //Pin 41.
#define P1_3 42  //Pin 42.
#define P1_4 43  //Pin 43.
#define P1_5 44  //Pin 44.
#define P1_6 45  //Pin 45.

//Player2.
#define P2_1 12  //Pin 12.
#define P2_2 13  //Pin 13.
#define P2_3 14  //Pin 14.
#define P2_4 15  //Pin 15.
#define P2_5 16  //Pin 16.
#define P2_6 17  //Pin 17.

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
  
  //Player2
  pinMode(P2_1, INPUT_PULLUP);
  pinMode(P2_2, INPUT_PULLUP);
  pinMode(P2_3, INPUT_PULLUP);
  pinMode(P2_4, INPUT_PULLUP);
  pinMode(P2_5, INPUT_PULLUP);
  pinMode(P2_6, INPUT_PULLUP);

  if (digitalRead(P1_1) || digitalRead(P1_2) || digitalRead(P1_3)) {
    hit_P1_1 = true;
    hit_P1_2 = true;
    hit_P1_3 = true;
  }
  if (digitalRead(P1_4) || digitalRead(P1_5) || digitalRead(P1_6)) {
    hit_P1_4 = true;
    hit_P1_5 = true;
    hit_P1_6 = true;
  }
  if (digitalRead(P2_1) || digitalRead(P2_2) || digitalRead(P2_3)) {
    hit_P2_1 = true;
    hit_P2_2 = true;
    hit_P2_3 = true;
  }
  if (digitalRead(P2_4) || digitalRead(P2_5) || digitalRead(P2_6)) {
    hit_P2_4 = true;
    hit_P2_5 = true;
    hit_P2_6 = true;
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
  //Hit is false.
  //PLayer1.
  if (digitalRead(P1_1)) {
    if (!hit_P1_1) {
      hit_P1_1 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P1_2)) {
    if (!hit_P1_2) {
      hit_P1_2 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P1_3)) {
    if (!hit_P1_3) {
      hit_P1_3 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P1_4)) {
    if (!hit_P1_4) {
      hit_P1_4 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P1_5)) {
    if (!hit_P1_5) {
      hit_P1_5 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P1_6)) {
    if (!hit_P1_6) {
      hit_P1_6 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  
  //Player2.
  if (digitalRead(P2_1)) {
    if (!hit_P2_1) {
      hit_P2_1 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P2_2)) {
    if (!hit_P2_2) {
      hit_P2_2 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P2_3)) {
    if (!hit_P2_3) {
      hit_P2_3 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P2_4)) {
    if (!hit_P2_4) {
      hit_P2_4 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P2_5)) {
    if (!hit_P2_5) {
      hit_P2_5 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  if (digitalRead(P2_6)) {
    if (!hit_P2_6) {
      hit_P2_6 = true;
      //Release key.
      Keyboard.set_key1(0);
      Keyboard.send_now();
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  
  //Hit is true.
  //Player1.
  if (!digitalRead(P1_1)) {
    if (hit_P1_1) { 
      hit_P1_1 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_Q);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P1_2)) {
    if (hit_P1_2) { 
      hit_P1_2 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_W);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P1_3)) {
    if (hit_P1_3) { 
      hit_P1_3 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_E);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P1_4)) {
    if (hit_P1_4) { 
      hit_P1_4 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_S);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P1_5)) {
    if (hit_P1_5) { 
      hit_P1_5 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_U);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P1_6)) {
    if (hit_P1_6) { 
      hit_P1_6 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_I);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  
  if (!digitalRead(P2_1)) {
    if (hit_P2_1) { 
      hit_P2_1 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_Y);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P2_2)) {
    if (hit_P2_2) { 
      hit_P2_2 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_T);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P2_3)) {
    if (hit_P2_3) { 
      hit_P2_3 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_A);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P2_4)) {
    if (hit_P2_4) { 
      hit_P2_4 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_D);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P2_5)) {
    if (hit_P2_5) { 
      hit_P2_5 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_O);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  if (!digitalRead(P2_6)) {
    if (hit_P2_6) { 
      hit_P2_6 = false;
      Serial.println("Hit!");
      //Press key.
      Keyboard.set_key1(KEY_P);
      Keyboard.send_now();
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  delay(50);
}
