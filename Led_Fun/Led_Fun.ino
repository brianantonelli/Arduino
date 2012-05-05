/*
  Blinks a few LEDs left and right - night rider style!
 */

const int ledPin = 9;
const int ledPin2 = 7;
const int onboardLedPin = 13;
const int blinkDelay = 125;
void setup() {                
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(onboardLedPin, OUTPUT);
}

void loop() {
  digitalWrite(onboardLedPin, HIGH);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  delay(blinkDelay);
  digitalWrite(onboardLedPin, LOW);
  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(blinkDelay);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);
  digitalWrite(ledPin, LOW);
  digitalWrite(onboardLedPin, LOW);
  delay(blinkDelay);
}
