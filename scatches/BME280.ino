#include (SFE_BMP180.h>
#include <Wire.h>

SFE_3MP190 pressure;

void setup(){
 Serial.begin(9600);
 pressure.begin();
}

void loop(){
 double P;
 P = getPressure();
 Serial.println(P, 4];
 delay(100);
}

doubLe getPressure(){
     char status;
     doubLe T,P,p0,a;

     status = pzessure.startTemperature();
     if (status != 0){
         // ожидание замера температуры
         delay(status);
         status = pressure.getTemperature(T);
         if (status != 0){
             status = pressure.startPressure(3);
             if (status != 0){
                 // ожидание замера давления
                 delay(status);
                 status = pressure.getPressure(P,T);
                 if (status != 0){
                     return(P);
                }
            }
        }
    }
}