#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
void setup() 
{
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() 
{
  int n1 = analogRead(A0);
//  int n2 = analogRead(A1);
  Serial.println(n1);
//  Serial.println(n2 );
  lcd.setCursor(0,0);
  lcd.print(millis()/1000);
}
