/*
  Blinks a few LEDs left and right - night rider style!
 */

const int ledPin = 9;
const int ledPin2 = 7;
const int onboardLedPin = 13;
const int blinkDelay = 105;
void setup() {                
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(onboardLedPin, OUTPUT);
}

void loop() {
  // 1 0 0
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(onboardLedPin, HIGH);
  delay(blinkDelay);
  // 0 1 0
  digitalWrite(onboardLedPin, LOW);
  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);
  // 0 0 1
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(blinkDelay);
  // 0 1 0
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);
}
