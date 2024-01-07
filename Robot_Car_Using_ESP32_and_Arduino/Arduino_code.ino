//Written by SHAH ZAMAN HAIDER
//https://github.com/ShahZamanHaider

#include <SoftwareSerial.h>


#define enA 5 // Enable motor A
#define in1 6  // Motor A input 1
#define in2 7  // Motor A input 2
#define enB 10  // Enable motor B
#define in3 8  // Motor B input 3
#define in4 9  // Motor B input 4

SoftwareSerial mySerial(2, 3); // RX, Tx

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(115200);  // Initialize serial communication
  mySerial.begin(115200);
}

void loop() {
  if (mySerial.available() > 0) {// Check if data is available on the serial port
    
     char command = mySerial.read();  // Read the command character
     executeCommand(command);
  }
}

void executeCommand(char command) {
  switch (command) {
    case 'F':
      forward();
      Serial.println(command);
      break;
    case 'B':
      backward();
      Serial.println(command);
      break;
    case 'L':
      left();
      Serial.println(command);
      break;
    case 'R':
      right();
     Serial.println(command);
      break;
    case 'S':
      stop();
      Serial.println(command);
      break;
    default:
      break;
  }
  Serial.flush();
}

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 150);
  analogWrite(enB, 150);
}

void backward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 150);
  analogWrite(enB, 150);
}

void left() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 150);
  analogWrite(enB, 150);
}

void right() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 150);
  analogWrite(enB, 150);
}

void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
}

//Written by SHAH ZAMAN HAIDER
//https://github.com/ShahZamanHaider
