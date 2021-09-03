#include "libs/LCD.h"
#include "libs/DHT.h"

int main(void) {

    LCD lcd(2, 3, 4, 5, 6, 7);
    DHT dht(8, DHT11);
    double temperatura=0;
    double humedad=0;
    while (1) {
        lcd.clear();
        dht.read (&temperatura,&humedad);
        lcd.print(temperatura);
        lcd.print("C");
        lcd.setXY(1,2);
        lcd.print(humedad);
        lcd.print("%");
        _delay_ms(500);
    }
    
    return 0;
}