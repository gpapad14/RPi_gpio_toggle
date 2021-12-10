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
	int j=0;
	int led = 1; // pin number with respect to the wPi enumaration that one can get with the command $ gpio readall

	pinMode(led, OUTPUT);
	digitalWrite(1, 0);
	printf("1");
	digitalWrite(1, 1);
	printf("0");
	digitalWrite(1, 0); 
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");
	digitalWrite(1, 1); 
	printf("0");
	digitalWrite(1, 0);
	printf("0");

	printf("\n");	
	return 0 ;
}
