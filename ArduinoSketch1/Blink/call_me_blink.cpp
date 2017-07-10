

#include <Arduino.h>

void BLINK_LED(int LED_TIME)
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(LED_TIME);
	digitalWrite(LED_BUILTIN, LOW);
	delay(LED_TIME);
}

