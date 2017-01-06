//@ayrusreev

#include <Wire.h>

void setup() {
  Wire.begin(11);                // join i2c bus address #11
  Serial.begin(9600);           // start serial for receiving output
}

void loop() {
  while (Wire.available()>1) // loop through all but the last
  { 
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }
  delay(150);
}

void receiveEvent(int howMany) {

}
