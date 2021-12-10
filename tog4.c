/*
Try to toggle a GPIO port using bcm2835.h

bcm2835 installation:
	# go to the directory you want to download and unzip the installation files.
	$ wget http://www.airspayce.com/mikem/bcm2835/bcm2835-1.60.tar.gz
	$ tar zxvf bcm2835-1.60.tar.gz
	$ cd bcm2835-1.60/
	$ ./configure
	$ make
	$ sudo make install 
configure the .c file:
	$ gcc <file_name>.c -O3 -lbcm2835 -o <executable_file_name>
	then run the executable with the command:
	$ ./<executable_file_name> 
	It is possible that you might need to use sudo:
	$ sudo ./<executable_file_name> 
*/

#include <bcm2835.h>
#include <stdio.h>

#define PIN RPI_GPIO_P1_07 // GPIO 4

int main(int argc, char *argv[]) {
    if(!bcm2835_init())
	return 1;

    // Set pin# to be an output
    bcm2835_gpio_fsel(4, BCM2835_GPIO_FSEL_OUTP);

	// Blink
	bcm2835_gpio_write(4, 0);
	//delay(500);
	bcm2835_gpio_write(4, 1);
	bcm2835_gpio_write(4, 1);
	bcm2835_gpio_write(4, 1);
	bcm2835_gpio_write(4, 1);
	bcm2835_gpio_write(4, 1);
	//delay(500);
	bcm2835_gpio_write(4, 0);
	//delay(0.001);
	bcm2835_gpio_write(4, 1);
	//delay(500);
	bcm2835_gpio_write(4, 0);
	//delay(500);
	bcm2835_gpio_write(4, 1);
	//delay(500);
	bcm2835_gpio_write(4, 0);
	//delay(500);
	bcm2835_gpio_write(4, 1);
	//delay(500);
	bcm2835_gpio_write(4, 0);
	//delay(500);
	bcm2835_gpio_write(4, 1);
	//delay(500);
	bcm2835_gpio_write(4, 0);
	//delay(500);

	while(1) { // This loop can reach the 6.557 MHz speed.
		bcm2835_gpio_write(4, 1);
		bcm2835_gpio_write(4, 0);
	}

    return 0;
}
