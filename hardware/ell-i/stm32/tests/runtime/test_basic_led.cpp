
#include "Arduino.h"

void setup() {
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    digitalWrite(13, 1);
}

void loop() {
    digitalWrite(13, 1);
    digitalWrite(12, 1);
    delay(1000);
    digitalWrite(13, 0);
    digitalWrite(12, 0);
    delay(1000);    
}
