/*
   Ultrasonic Simple
   Prints the distance read by an ultrasonic sensor in
   centimeters. They are supported to four pins ultrasound
   sensors (liek HC-SC04) and three pins (like PING)))
   and Seeed Studio sensors).
   The circuit:
 * * Module HR-SC04 (four pins) or PING))) (and other with
     three pins), attached to digital pins as follows:
   ---------------------    --------------------
   | HC-SC04 | Arduino |    | 3 pins | Arduino |
   ---------------------    --------------------
   |   Vcc   |   5V    |    |   Vcc  |   5V    |
   |   Trig  |   12    | OR |   SIG  |   13    |
   |   Echo  |   13    |    |   Gnd  |   GND   |
   |   Gnd   |   GND   |    --------------------
   ---------------------
 
*/

#include "Ultrasonic.h"

/*
   Pass as a parameter the trigger and echo pin, respectively,
   or only the signal pin (for sensors 3 pins), like:
   Ultrasonic ultrasonic(13);
*/
Ultrasonic ultrasonic(12, 13);
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches

  distance = ultrasonic.read(CM);

  Serial.print("Distance in CM: ");
  Serial.println(distance);

  distance = ultrasonic.read(INC);

  Serial.print("Distance in Inches: ");
  Serial.println(distance);

  delay(1000);
}/*
   Ultrasonic Simple
   Prints the distance read by an ultrasonic sensor in
   centimeters. They are supported to four pins ultrasound
   sensors (liek HC-SC04) and three pins (like PING)))
   and Seeed Studio sensors).
   The circuit:
 * * Module HR-SC04 (four pins) or PING))) (and other with
     three pins), attached to digital pins as follows:
   ---------------------    --------------------
   | HC-SC04 | Arduino |    | 3 pins | Arduino |
   ---------------------    --------------------
   |   Vcc   |   5V    |    |   Vcc  |   5V    |
   |   Trig  |   12    | OR |   SIG  |   13    |
   |   Echo  |   13    |    |   Gnd  |   GND   |
   |   Gnd   |   GND   |    --------------------
   ---------------------
 
*/

#include "Ultrasonic.h"

/*
   Pass as a parameter the trigger and echo pin, respectively,
   or only the signal pin (for sensors 3 pins), like:
   Ultrasonic ultrasonic(13);
*/
Ultrasonic ultrasonic(12, 13);
int distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches

  distance = ultrasonic.read(CM);

  Serial.print("Distance in CM: ");
  Serial.println(distance);

  distance = ultrasonic.read(INC);

  Serial.print("Distance in Inches: ");
  Serial.println(distance);

  delay(1000);
}v
