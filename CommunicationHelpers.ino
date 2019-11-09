#include "i2c_helper.h"

#define Serial SerialUSB
void setup ()
{
	Serial.begin(115200);
	while(!Serial);
	Serial.println("Started");
	int addr = read8(0x68, 0x68);

	Serial.println("Whoami: " + String(addr));
}

void loop ()
{
	
}
