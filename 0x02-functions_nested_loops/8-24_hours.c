#include "main.h"

/**
 * jack_bauer - Prints every minute of the jack bauewr song
 * 		Jack Bauer, starting from 00:00 to 23:50.
 */
void jack_bauer(void);
{
int hour, minute;

for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
