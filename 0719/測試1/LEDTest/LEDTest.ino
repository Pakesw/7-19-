#include "FPS_GT511C3.h"
#include "SoftwareSerial.h"
FPS_GT511C3 fps(4, 5);
void setup() {
  Serial.begin(9600);
  fps.UseSerialDebug = true;
  fps.Open();
}

void loop() {
  fps.SetLED(true); // turn on the LED inside the fps
  while(1)
  {
  delay(1000);
  }
}
