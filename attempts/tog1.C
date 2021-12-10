/*
This is an example in C(.c) or C++(.C). Both extentions work fine for this simple example.
To compile the .c file and create an executable use the command:
gcc -Wall -o blink blink.C -lwiringPi
You might get warnings, but "warnings" are not important.
Then, run the executable as:
./blink
or
sudo ./blink
*/

#include <wiringPi.h>
#include <stdio.h>
int main(void) {
	wiringPiSetup();
	int led = 1; // pin number with respect to the wPi enumaration that one can get with the command $ gpio readall
	pinMode(led, OUTPUT);
	digitalWrite(1,  LOW); 
	delay(1);

	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH);
	digitalWrite(1, HIGH);  
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	delay(0.01);
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW);
	delay(0.01);
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	delay(0.01);
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW);
	delay(0.01);
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	delay(0.01);
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1, HIGH); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	digitalWrite(1,  LOW); 
	
  return 0 ;
}
