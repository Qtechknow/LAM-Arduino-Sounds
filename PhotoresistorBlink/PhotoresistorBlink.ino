/*  Photoresistor Blink

Blinks the built-in LED at D13 proportionate to the value of the photoresistor.
When there is more light, the LED blinks slower, and when there is less light
(or you put your hand over the photoresistor), the LED blinks faster.

created 5 Apr 2012
by Quin
*/

const int ledPin = 13;  // set up our LED at pin 13

int sensorValue;  // variable to store the value of the photoresistor

void setup() {
  pinMode(ledPin, OUTPUT);  // the led is our output
}

void loop() {
  sensorValue=analogRead(0);   // sensorValue is the value of our photoresistor
  
  digitalWrite(ledPin, HIGH);   // blink the LED proportionate to the value
  delay(sensorValue/4);         // of the photoresistor
  digitalWrite(ledPin, LOW);
  delay(sensorValue/4);         // divide by 4 to get the blink value
}
