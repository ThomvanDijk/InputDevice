//Led indicates hit.
#define LED_PIN  6

//Player1.
#define P1_1 6
#define P1_2 7
#define P1_3 8
#define P1_4 9
#define P1_5 10
#define P1_6 11

//Player2.
#define P2_1 12
#define P2_2 13
#define P2_3 14
#define P2_4 15
#define P2_5 16
#define P2_6 17

boolean ButtonPressed1;

void setup() {
  ButtonPressed1 = false;
  pinMode(LED_PIN, OUTPUT); 
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(38400);
  if (digitalRead(BUTTON_PIN)) {
    ButtonPressed1 = false;
  }
}

void loop() {
  //Button is not pressed.  
  if (digitalRead(BUTTON_PIN)) {
    if (ButtonPressed1) {
      ButtonPressed1 = false;
      digitalWrite(LED_PIN, LOW);
      //Keyboard.set_modifier(0);
     // Mouse.set_key1(0);            //Mouse release
     
      //Keyboard.set_key1(0);          // release key
      //Keyboard.send_now();  
      Serial.println("Button is no longer pressed.");
    } 
  }
  
  //Button is pressed.
  else {  
    if (!ButtonPressed1) {  // If the last state was different,
      ButtonPressed1 = true;
      digitalWrite(LED_PIN, HIGH);   // set the LED on
      //Keyboard.set_modifier(MODIFIERKEY_SHIFT | MODIFIERKEY_CTRL);
      Mouse.click();            //Mouse press
      
      //Keyboard.set_key1(KEY_T);      //Press key
      //Keyboard.send_now();
      Serial.println("Button is pressed!");
    }
  }
}
