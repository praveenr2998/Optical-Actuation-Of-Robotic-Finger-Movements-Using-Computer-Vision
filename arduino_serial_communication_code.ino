#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
int datafromUser=0;



void setup() {

  myservo1.attach(3);
  myservo2.attach(6);
  myservo3.attach(9);
  myservo4.attach(11);
  Serial.begin(9600);
  
}



void loop() {
  
  if(Serial.available() > 0)
  {
    datafromUser=Serial.read();
  }


  
  
  if(datafromUser == '1')
  {
    myservo1.write(90);
    delay(500);
    myservo2.write(90);
    delay(500);
    myservo3.write(0);
    delay(500);
    myservo4.write(0);
    delay(500);
    
  }
  
  
  else if(datafromUser == '2')
  {
    myservo1.write(0);
    delay(500);
    myservo2.write(0);
    delay(500);
    myservo3.write(50);
    delay(500);
    myservo4.write(180);
    delay(500);
  }
 
  
  else if(datafromUser == '3')
  {
    myservo1.write(90);
    delay(500);
    myservo2.write(0);
    delay(500);
    myservo3.write(90);
    delay(500);
    myservo4.write(180);
    delay(500);
    
  }
 
  
  else if(datafromUser == '4')
  {
    myservo1.write(90);
    delay(500);
    myservo2.write(90);
    delay(500);
    myservo3.write(90);
    delay(500);
    myservo4.write(180);
    delay(500);
    
  }

 
  else if(datafromUser == '5')
  {
    myservo1.write(90);
    delay(500);
    myservo2.write(90);
    delay(500);
    myservo3.write(0);
    delay(500);
    myservo4.write(180);
    delay(500);
    
  }

  
  else if(datafromUser == '6')
  {
    myservo1.write(90);
    delay(500);
    myservo2.write(90);
    delay(500);
    myservo3.write(0);
    delay(500);
    myservo4.write(0);
    delay(500);
    
  }
  
}
