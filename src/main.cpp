#include <Arduino.h>
#include <Ultrasonic.h>
#include <ESP32Servo.h>

Ultrasonic ultrasonic1(12, 13);	  // An ultrasonic sensor HC-04 on pins 12 (trigger) 13 (echo)
#define SERVO_PIN          26     // ESP32 pin GPIO26 connected to servo motor's pin
#define LED1_PIN          18 
#define LED2_PIN          5 

Servo myservo;          // create servo object to control a servo
int angle = 0;          // the current angle of servo motor


//Initial configuration
void setup() {
  Serial.begin(9600);
  myservo.setPeriodHertz(50);   // standard 50 hz servo
	myservo.attach(SERVO_PIN);    //, 1000, 2000); // Attach the servo after it has been detatched
  myservo.write(0);

  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
}

//Main loop
void loop() {
  Serial.print("Sensor 01: ");
  Serial.print(ultrasonic1.read());   // Prints the distance on the default unit (centimeters)
  Serial.println("cm");

  //If dinstance is less than 9cm, rotate the servo motor to 90°
  if (ultrasonic1.read() <= 9){
    Serial.println("Object detected!, rotating servo motor to 90° and light on the LEDs");
    digitalWrite(LED1_PIN, HIGH);     // turn the LED on
    digitalWrite(LED2_PIN, HIGH);      // turn the LED on
    myservo.write(90);
    delay(500);

  }

  //If dinstance is greater than 9cm, rotate the servo motor to 0° and light off the LED
  digitalWrite(18, LOW);
  digitalWrite(5, LOW);
  myservo.write(0);

  //myservo.detach(); // Turn the servo off for a while
  delay(1000);
}