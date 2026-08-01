/*
 * AUTHOR: BANDAR KHALED SALEH BAWODOOD 
 * DATE: 26/7/2026
 *
 *
 * Project: Temperature Monitor with LCD
 * 
 */

#include <LiquidCrystal.h>

#define LM35    A0  
#define RS      7
#define EN      6
#define D4      5
#define D5      4
#define D6      3
#define D7      2

#define TEMP_REF_VOLAGE   5.0

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("Hello Testing .. ");
  pinMode(A0, INPUT);
  delay(1000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperature:");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int analog_temp = analogRead(LM35);
  float temp = (((float) analog_temp * TEMP_REF_VOLAGE) / 1024.0) * 100.0;

  lcd.setCursor(0, 1);
  lcd.print(temp, 2); 
  lcd.print(" C    ");
  delay(1000);
}
