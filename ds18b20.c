#include <stdio.h>
#include <ds18b20.h>
#include <wiringPi.h>

int main(){
	int pinBase = 140;
	char deviceId[12] = "01144fe3b8aa";
		
	wiringPiSetup();
	ds18b20Setup(pinBase, deviceId);
	
	int value = analogRead(pinBase+1);
	printf("%d",value);
	
	fflush(stdout);


	return 0;
}
