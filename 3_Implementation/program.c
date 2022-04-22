#include <LiquidCrystal.h>
#define ledPin 8 // choose the pin for the LED 
#define switchPin 7 // choose the input pin (for a pushbutton)
const int rs = 3, en = 2, d4 = 12, d5 = 11, d6 =10 , d7 = 9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int val = 0; // variable for reading the pin status

void setup()
{
  pinMode(ledPin, OUTPUT); // declare LED as output
  pinMode(switchPin, INPUT); // declare pushbutton as input
   // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("K.R.GOKUL");
}

void loop()
{
  val = digitalRead(switchPin); // read input value
  if (val == HIGH)
  { // check if the input is HIGH (button released)
    digitalWrite(ledPin, LOW); // turn LED OFF
     lcd.setCursor(0, 1);
     lcd.print("Gas detected");
  } 
  else
  {
    digitalWrite(ledPin, HIGH); // turn LED ON } }
    lcd.setCursor(0, 1);
     lcd.print("Gas Not detected");
    
  }
}
