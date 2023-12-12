#include <LiquidCrystal.h>

int seconds = 0;
const int temp = A0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  Serial.begin(9600);
  lcd_1.begin(16, 2); 
}

void loop()
{
  int reading = analogRead(temp);
  float ratio = reading/1024.0;
  float digital_vol = ratio*5;
   // now print out the temperature

   float temperatureC = (digital_vol - 0.5) * 100;
   Serial.print(temperatureC);
   Serial.println(" degrees C");

   lcd_1.setCursor(2,0);
   lcd_1.print("Temperature");
    lcd_1.setCursor(1,1);
   lcd_1.print(temperatureC);
   lcd_1.setCursor(8,1);
   lcd_1.print("Celcius");
  
 
   delay(100);
}