
#include <Arduino.h>
#include <ledbilnk.h>


// the number of the LED pin
const int LED = 18;  // 18 corresponds to GPIO 18

void setup() {
  // set the ledPin as an output
  pinMode(LED, OUTPUT);
}

void loop(){
  
fade_up(LED);
blink(LED);
fade_down(LED);

  }


// void loop() {
//   // put your main code here, to run repeatedly:
//   analogWrite(LED, 120);
//   Serial.println("LED is on");
//   delay(500);
//    analogWrite(LED, 70);
//   Serial.println("LED is on");
//   delay(500);
//   analogWrite(LED, 10);
//   Serial.println("LED is off");
//   delay(500);
//     analogWrite(LED, 60);
//   Serial.println("LED is on");
//   delay(500);
//     analogWrite(LED, 120);
//   Serial.println("LED is on");
//   delay(500);
// }
