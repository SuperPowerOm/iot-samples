#include <Grove-Ultrasonic-Ranger.h>
#include "Particle.h"

 Ultrasonic ultrasonic(D2);
 
 int lastRange = 0;

 void setup() {
     Serial.begin(9600);
 }

 void loop() {
     int rangeC;

     Serial.println("Obstacle found at:");

     rangeC = ultrasonic.MeasureInCentimeters();
     Serial.print(rangeC); //0~400cm
     Serial.println(" cm");
     
      if (rangeC != lastRange) {
     lastRange = rangeC;

     }
     if (rangeC < 69) {
         Serial.println("You past me!!!");
     }
     
     delay(2000);
 } 
