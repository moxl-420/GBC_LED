/*
Moxl's adaption of Blink for GBC_LED_V1

How to flash:
https://youtu.be/Z_MhVSlMZI8

Preparing Arduino IDE:
File -> preferences -> add additional board manager:
http://drazzy.com/package_drazzy.com_index.json

Tools -> board -> board manager 
Install: AttinyCore

On the Arduino side connect 10µF cap from RST to GND.
use Arduino nano as programmer: 
  ---------------------
  Arduino  |    Attiny (physical pins)
  ---------------------
  D10      |    1
  D11      |    5
  D12      |    6
  D13      |    7
  +5V      |    8
  GND      |    4
  ---------------------

All info can be found on my github.
https://github.com/moxl-420/GBC_LED

L1 + L2 go to physical pin 5 = arduino pin 0
L5 + L6 go to physical pin 6 = arduino pin 1
L7 + L8 go to physical pin 7 = arduino pin 2
*/

// Set the pins to the Attiny
int L1L2 = 0;
int L5L6 = 1;
int L7L8 = 2;

// The setup function runs once when you press reset or power the board
void setup() {
  
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(L1L2, OUTPUT);
  pinMode(L5L6, OUTPUT);
  pinMode(L7L8, OUTPUT);

  // Turn the LED on (HIGH is the voltage level)
  // Comment when using in loop.
  digitalWrite(L1L2, HIGH);   
  digitalWrite(L5L6, HIGH);
  digitalWrite(L7L8, HIGH);
}

// The loop function runs over and over again forever
void loop() {
  
  /* Uncomment this if you want your lights to blink or go wild.. It's up to you.
  digitalWrite(L1L2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(L5L6, HIGH);
  digitalWrite(L7L8, HIGH);
  delay(1000);                       // wait for a second
  digitalWrite(L1L2, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(L5L6, LOW);
  digitalWrite(L7L8, LOW);
  delay(1000);                       // wait for a second
  */
  delay(500);
}
