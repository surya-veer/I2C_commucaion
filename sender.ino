//@ayrusreev
//please go through README.md for wire connections..

#include <Wire.h>
void setup() {
  Wire.begin(); // join i2c bus (address optional for master)
}
void loop() {
  Wire.beginTransmission(11);//transmit to device #11
  Wire.write("Hello i am suryaveer");  // sends five bytes
  Wire.endTransmission();    // stop transmitting
  x++;
  delay(00);
}
