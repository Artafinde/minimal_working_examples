#include <LiquidCrystal_I2C.h> // Library for LCD

//Declare a LiquidCrystal_I2C object
LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

void setup()
{
  //Initialise the lcd
  lcd.init(); //initialize the lcd
  lcd.backlight();  //turn on lcd backlight
  lcd.clear();
}
  
void loop() 
{
  //Print message
  lcd.clear();
  lcd.setCursor(0, 0);  //column_index, row_index
  lcd.print("Row 0");
  delay(2000);    
  
  lcd.clear();
  lcd.setCursor(2, 1);  //column_index, row_index
  lcd.print("Row 1");
  delay(2000); 
  
}
