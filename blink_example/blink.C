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
	int led = 0; // pin number with respect to the wPi enumaration that one can get with the command $ gpio readall
	/*
	wiringPiSetupGPIO();
	int led = 17; // pin number with respect to the Broadcom enumaration that one can get with the command $ gpio readall. BCM:17 is the wPi:0
	*/
	pinMode(led, OUTPUT);
	digitalWrite(led,  LOW); 
	int j=0;
	for (int i=0; i<5; i++) {
    	digitalWrite(led, HIGH);
		delay(100);
		digitalWrite(led,  LOW); 
		delay(100);
		printf("line%d\n", i);
	}
  return 0 ;
}
