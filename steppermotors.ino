#include <AccelStepper.h>

#define bot1 22
#define bot2 24
#define bot3 26
#define bot4 28
 
AccelStepper stepper1; // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
AccelStepper stepper2(AccelStepper::FULL4WIRE, 6, 7, 8, 9);
AccelStepper stepper3(AccelStepper::FULL2WIRE, 10, 11);
 

 //int v1 = 500;
 //int v1a = v1*-1;
 //int v2 = 1000;
 //int v2a = v2*-1; 

void setup(){ 

    Serial.begin(9600);

    stepper1.setMaxSpeed(150);
    stepper1.setAcceleration(100);

    stepper2.setMaxSpeed(150);
    stepper2.setAcceleration(100);


    
    pinMode(bot1, INPUT_PULLUP);
    pinMode(bot2, INPUT_PULLUP);
    pinMode(bot3, INPUT_PULLUP);
    pinMode(bot4, INPUT_PULLUP);
}         

 
void loop(){ 

if(digitalRead(bot1) ==0){
  
  stepper1.setSpeed(1000);
  stepper1.run();
  //stepper2.setSpeed(0);
  stepper2.stop();
   
} if(digitalRead(bot2) ==0){
  
  stepper1.setSpeed(-1000);
  stepper1.run();
  //stepper1.setSpeed(0);
  stepper2.stop();

}

Serial.print(digitalRead(bot1));
Serial.print(digitalRead(bot2));
Serial.print(digitalRead(bot3));
Serial.println(digitalRead(bot4));

}