//Header file for servo 
//which contaons various kind of objects and methods. 
#include <Servo.h>

// create servo object to control a servo
// twelve servo objects can be created on most boards

Servo myservo;  

int pos = 0;    

void setup() 
{
  // attaches the servo on pin 9 to the servo object
  
  myservo.attach(9);
}

void loop()
{
     for (pos = 0; pos <= 180; pos += 1) 
     {   
        // tell servo to go to position in variable 'pos'
        myservo.write(pos);  
                    
        delay(15);                     
     }

    for (pos = 180; pos >= 0; pos -= 1) 
    {  
       myservo.write(pos);              
       delay(15);                      
    }
}
