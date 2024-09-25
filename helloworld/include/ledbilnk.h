#include <Arduino.h>

void blink (int LED) {

delay(50);
analogWrite(LED, 0);
delay(50);
analogWrite(LED,255);
delay(50);
}


void fade_up(int LED) {
 for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    analogWrite(LED, dutyCycle);
    delay(15);
}
 }

void fade_down(int LED) {
 for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    analogWrite(LED, dutyCycle);
    delay(15);
  }
}