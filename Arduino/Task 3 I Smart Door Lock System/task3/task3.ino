/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 1/8/2026
 *
 *
 * Project: Smart Door Lock System
 *
 * Requirement: 
 *    1- Enter password using keypad
•*    2- If correct: Servo rotates 90° (door opens), Buzzer makes a sound
 *    3- If wrong: (Optional) buzzer alert
 * 
 */

#include <Servo.h>
#include <Keypad.h>
#include <string.h>

#define SERVO_PIN     11
#define BUZZER_PIN    9
#define ROWS          4
#define COLUMNS       4
#define PASSWORD      "BB1234"
#define BUFF_SIZE     10

char hexaKeys[ROWS][COLUMNS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char buffer[BUFF_SIZE];
byte buffLen = 0;

byte rowPins[ROWS] = {3, 4, 5, 6}; 
byte colPins[COLUMNS] = {7, 8, 10, 12}; 

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLUMNS); 
Servo my_servo;

void setup() {
  // put your setup code here, to run once:
  my_servo.attach(SERVO_PIN);
  pinMode(BUZZER_PIN, OUTPUT);
  my_servo.write(0);

  memset(buffer, 0, BUFF_SIZE);

}

void loop() {
  // put your main code here, to run repeatedly:
  char button = customKeypad.getKey();

  if (button)
  {
    if (button == '#')
    {
      if (strcmp(buffer, PASSWORD) == 0)
      {
        // --- CORRECT PASSWORD ---
        tone(BUZZER_PIN, 1000); 
        delay(200);
        noTone(BUZZER_PIN);
        
        my_servo.write(90); // Open door
        delay(3000);        // Keep door open for 3 seconds
        my_servo.write(0);  // Lock door again
      }
      else 
      {
        // --- WRONG PASSWORD ---
        tone(BUZZER_PIN, 200); 
        delay(300);
        noTone(BUZZER_PIN);
        delay(100);
        tone(BUZZER_PIN, 200); 
        delay(300);
        noTone(BUZZER_PIN);
      }

      // Reset the buffer for the next attempt
      memset(buffer, 0, BUFF_SIZE);
      buffLen = 0;
    }
    else 
    {
      if (buffLen < BUFF_SIZE - 1) {
        buffer[buffLen] = button;
        buffLen++;
        buffer[buffLen] = '\0'; 
      }
    } 
  }
  
}
