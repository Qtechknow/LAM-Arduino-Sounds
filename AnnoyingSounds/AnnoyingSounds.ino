/*  Annoying Sounds

Demonstrates the use of a buzzer or speaker.  When you twist the knob, or
potentiometer, the pitch of the buzzer or speaker will change.

The parts that you will need are:
-Arduino
-potentiometer
-buzzer or speaker

made on 10 July 12
created by Quin
*/

int lowVal = 0;       // declare the highest value that your sensor goes up to:
int highVal = 1023;  // most likely 0 and 1023, respectively

const int buzzerPin = 9;  // the pin that your buzzer is connected to
const int sensorPin = A0;  // the pin that your potentiometer is connected to

void setup() {
  // no need for any code here
}

void loop() {
  // read the potentiometer
  int sensorValue=analogRead(sensorPin);
  
  // convert the potentiometer values to values that the buzzer can use
  int val=map(sensorValue, highVal, lowVal, 150, 1500);  
  
  // make the tone
  tone(buzzerPin, val);
}

