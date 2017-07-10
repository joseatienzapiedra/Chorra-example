#include <Arduino.h>
#include "call_me_blink.h"


unsigned int i=0;

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
   BLINK_LED(i);         
   i=i+10;  
   
   if (i>=400)
   {
   i=0;
   }
}
