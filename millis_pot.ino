/*     Simple Stepper Motor Control Exaple Code
 *      
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 *  
 */
// defines pins numbers
const int stepPin = 3; 
const int dirPin = 4; 
int speed = 350;// ρυθμήζει τις στροφές 500 = 9.2 rpm   350=13.2 rpm - 680=7 rpm
float time_now = 0; // δοκιμασε και unsign long

 
void setup() {

  //Serial.begin(9600);  

  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
}
void loop() {

  
     int value = analogRead(A0);
      speed = map(value,0,1023,265,700); // to 700 e;inai 7 ρπμ  

  //digitalWrite(dirPin,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
 
  if(micros() > time_now + speed){
        time_now = micros();
     digitalWrite(stepPin,LOW); 

  }
     else{
      digitalWrite(stepPin,HIGH); 
     }
         //    Serial.println(speed);
     //delay(10);






     
  }

//     
  

  /*
   if(millis() < time_now + period){
        time_now = millis();
     digitalWrite(stepPin,LOW); 

   }

     
    }
  /*
  
  for(int x = 0; x < 10000; x++) {
    digitalWrite(stepPin,HIGH); 
    delay(1); 
    digitalWrite(stepPin,LOW); 
    delay(1); 
  }
}
  /*
  delay(100); // One second delay
  
  digitalWrite(dirPin,LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 10000; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(100);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(100);
  }
  delay(100);
}
*/
