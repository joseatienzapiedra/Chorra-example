#include <Arduino.h>
#include "call_me_blink.h"


void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
   BLINK_LED();           
}
