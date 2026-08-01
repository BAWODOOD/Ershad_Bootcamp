/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 26/7/2026
 *
 *
 * Project: Servo Motor Control with Potentiometer
 *
 * Requirement: 
 *    1- Rotate the servo based on potentiometer value
•*    2- Map analog input (0–1023) → servo angle (0–180)
 * 
 */
#include <Servo.h>

Servo myservo;

#define SERVO_PIN             3
#define POTENTIOMETER_PIN     A0


void setup() {
  // put your setup code here, to run once:
  myservo.attach(SERVO_PIN);
  pinMode(POTENTIOMETER_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(POTENTIOMETER_PIN);
  int angle = map(val, 0, 1023, 0, 180);

  myservo.write(angle);
  delay(15);
}
