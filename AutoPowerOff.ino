// Written by Nick Koumaris
//info@educ8s.tv
//educ8s.tv

#include <Adafruit_SSD1306.h>  
#include <Adafruit_GFX.h>

// Pin definitions
#define OLED_RESET 4
const int MOSFETPIN =  7; 

void setup(void)
{
  pinMode(MOSFETPIN, OUTPUT);
  digitalWrite(MOSFETPIN, HIGH);
 
  Adafruit_SSD1306 display(OLED_RESET);

  // SSD1306 Init
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);  // Switch OLED

  display.clearDisplay();

  // text display tests
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(5,0);
  display.println("Power Off");

  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(50,30);
  display.print("5"); 
  display.display();
  delay(1000);
  
  display.setCursor(50,30);
  display.setTextColor(BLACK);
  display.print("5");
  display.setTextColor(WHITE);
  display.setCursor(50,30);
  display.print("4");
  display.display();
  delay(1000);

  display.setCursor(50,30);
  display.setTextColor(BLACK);
  display.print("4");
  display.setTextColor(WHITE);
  display.setCursor(50,30);
  display.print("3");
  display.display();
  delay(1000);

  display.setCursor(50,30);
  display.setTextColor(BLACK);
  display.print("3");
  display.setTextColor(WHITE);
  display.setCursor(50,30);
  display.print("2");
  display.display();
  delay(1000);

  display.setCursor(50,30);
  display.setTextColor(BLACK);
  display.print("2");
  display.setTextColor(WHITE);
  display.setCursor(50,30);
  display.print("1");
  display.display();
  delay(1000);

  digitalWrite(MOSFETPIN, LOW);


}

void loop() {

}

