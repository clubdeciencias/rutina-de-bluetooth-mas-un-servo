#include <Servo.h>
#include <SoftwareSerial.h>

Servo myservo1;
Servo myservo2;
//SoftwareSerial Serial(10, 11);
char unchar;
String readString;
int OutServo1=5;
int OutServo2=6;

void setup() {
myservo1.attach(OutServo1);
myservo2.attach(OutServo2);
//Serial.begin(9600);
Serial.begin(9600);
pinMode(12,OUTPUT);
}

void loop() {

  if (Serial.available()){
    unchar = Serial.read();
    if(unchar=='1'){
      motor1();
     
    }
    if(unchar=='2'){
      motor2();
    }
     if(unchar=='3'){
      motor3();
     }
  }
}
void motor1() {
      digitalWrite(12,HIGH);
      delay(500);
      myservo1.write(90);
      delay(1500);
      //myservo1.write(0);
      unchar=""; 
   
}
void motor2() {
     digitalWrite(12,HIGH);
     delay(500);
     digitalWrite(12,LOW);
      myservo1.write(180);
      delay(1500);
      unchar="";
}
void motor3() {
     digitalWrite(12,HIGH);
     delay(500);
     digitalWrite(12,LOW);
      myservo1.write(135);
      delay(1500);
      unchar="";
}
 // Codigo copiado de video de youtube para conectar servo que no hace mover ningun servo
//void motor1(){
//    delayMicroseconds(300);
//    while (Serial.available()){
//      //delayMicroseconds(100)
//      char c = Serial.read();
//    readString += c;
//      }
//    if (readString.length()>0){
//      Serial.println (readString.toInt());
//      readString="";
//    }
//}
 
