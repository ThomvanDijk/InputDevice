//Led indicates hit.
#define LED 6

//Player1.
#define P1_1 40
#define P1_2 41
#define P1_3 42
#define P1_4 43
#define P1_5 44
#define P1_6 45

//Player2.
#define P2_1 12
#define P2_2 13
#define P2_3 14
#define P2_4 15
#define P2_5 16
#define P2_6 17

boolean hitDetection;

void setup() {
  Serial.begin(9600);
  hitDetection = false;
  pinMode(LED, OUTPUT);
  
  pinMode(P1_1, INPUT_PULLUP);
  pinMode(P1_2, INPUT_PULLUP);
  pinMode(P1_3, INPUT_PULLUP);
  pinMode(P1_4, INPUT_PULLUP);
  pinMode(P1_5, INPUT_PULLUP);
  pinMode(P1_6, INPUT_PULLUP);
  
  pinMode(P2_1, INPUT_PULLUP);
  pinMode(P2_2, INPUT_PULLUP);
  pinMode(P2_3, INPUT_PULLUP);
  pinMode(P2_4, INPUT_PULLUP);
  pinMode(P2_5, INPUT_PULLUP);
  pinMode(P2_6, INPUT_PULLUP);
  
  if (digitalRead(P1_1)) {
    hitDetection = true;
  }
  else {
    hitDetection = false;
  }
}

void loop() {
  //Button is not pressed.  
  if (digitalRead(P1_1)) {
    if (!hitDetection) {
      hitDetection = true;
      //Set the LED off.
      digitalWrite(LED, LOW);
    }
  }
  //Button is pressed.
  else {
    if (hitDetection) { 
      hitDetection = false;
      Serial.println("Hit!");
      //Set the LED on.
      digitalWrite(LED, HIGH);
    }
  }
  delay(50);
}
