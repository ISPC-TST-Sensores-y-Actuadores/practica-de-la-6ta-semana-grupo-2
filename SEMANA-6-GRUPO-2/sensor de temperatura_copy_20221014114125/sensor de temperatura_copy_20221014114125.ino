
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
lcd.begin(16, 2); 
}

void loop() 
{ 
  int c = centi ();
  
  lcd.setCursor(0,0);
  lcd.print("TEMPERATURA:   C");
  lcd.setCursor(13,0);
  lcd.print(c);
  lcd.setCursor(0,1);
  lcd.print("semana-6");
  
}

float centi()
{
  int dato; 
  int c; 
  dato= analogRead(A0);
  c = (500.0 * dato)/1023;
  return(c); 
}
