//Written by SHAH ZAMAN HAIDER
//https://github.com/ShahZamanHaider

#include "Servo.h"

int pan_pin = 4; //Left Right
int tilt_pin = 11;//Up Down

int deefault = 0;

Servo pan;
Servo tilt;

void setup(){

pan.attach(pan_pin);
tilt.attach(tilt_pin);


}

void loop(){


//PAN (LEFT RIGHT)

for(int i = deefault; i<=180; i++){

pan.write(i);
delay(10);

} //from 0 to 180

for(int i = 180; i>=deefault; i--){

pan.write(i);
delay(10);

} //from 180 to 0

for(int i = deefault; i<=90; i++){

pan.write(i);
delay(10);

} //from 0 to 90




//TILT (UP DOWN)

for(int j = deefault; j<=180; j++){

tilt.write(j);
delay(10);

}//from 0 to 180

for(int j = 180; j>=deefault; j--){

tilt.write(j);
delay(10);

}//from 180 to 0

for(int j = deefault; j<=90; j++){

tilt.write(j);
delay(10);

}//from 0 to 90

delay(500);

}


//Written by SHAH ZAMAN HAIDER
//https://github.com/ShahZamanHaider
