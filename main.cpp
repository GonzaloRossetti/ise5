#include "libs/analog.h"
#include "libs/LCD.h"
#include "libs/bmp180.h"

int main(void) {

    BMP180 bmp;                 // Inicializacion del sensor
    LCD lcd(2, 3, 4, 5, 6, 7);  // Inicializacion del display

    while(1) {

        uint8_t status = bmp.read();    // Hago una lectura completa y guardo el estado
        if (status == bmp.status_ok) { 
            lcd.clear();
            float Tapia = 0;
            if (digitalRead(8)){
                Tapia = bmp.getPressure(0);
                lcd.print(Tapia);
                lcd.print(" Pa");
            }
            if (digitalRead(9)){
                Tapia = bmp.getPressure(1);
                lcd.print(Tapia);
                lcd.print(" hPa");
            }
            if (digitalRead(10)){
                Tapia = bmp.getPressure(2);
                lcd.print(Tapia);
                lcd.print(" kPa");
            }
            if (digitalRead(11)){
                Tapia = bmp.getPressure(3);
                lcd.print(Tapia);
                lcd.print(" Atm");
            }
            if (digitalRead(12)){
                Tapia = bmp.getPressure(4);
                lcd.print(Tapia);
                lcd.print(" mmHg");
            }
            if (digitalRead(13)){
                Tapia = bmp.getPressure(5);
                lcd.print(Tapia);
                lcd.print(" Bar");
            }
            if (digitalRead(14)){
                Tapia = bmp.getPressure(6);
                lcd.print(Tapia);
                lcd.print(" PSI");
            }
            if (digitalRead(15)){
                Tapia = bmp.getPressure(7);
                lcd.print(Tapia);
                lcd.print(" Torr");
            }
           
        }

    }

    return 0;
}

