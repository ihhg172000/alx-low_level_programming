#include "main.h"

/**
* jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour <= 9)
			{
				_putchar('0');
				_putchar(hour + 48);
			}
			else
			{
				_putchar((hour / 10) + 48);
				_putchar((hour % 10) + 48);
			}

			_putchar(':');

			if (minute <= 9)
			{
				_putchar('0');
				_putchar(minute + 48);
			}
			else
			{
				_putchar((minute / 10) + 48);
				_putchar((minute % 10) + 48);
			}

			_putchar('\n');
		}
	}
}
