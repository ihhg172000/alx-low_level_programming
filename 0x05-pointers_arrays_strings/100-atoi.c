#define BASE_MAX 1000000000

/**
* _atoi - convert a string to an integer
* @s: string to be converted
*
* Return: result of converting
*/
int _atoi(char *s)
{
	unsigned int num = 0;
	int base = 1, sign = 1, is_end_of_num = 0, length = 0;

	while (*s)
	{
		s++;
		length++;
	}

	while (length >= 0)
	{
		if (*--s >= '0' && *s <= '9')
		{
			if (is_end_of_num)
			{
				num = 0;
				base = 1;
				sign = 1;
			}

			num += (*s - 48) * base;

			if (base < BASE_MAX)
				base *= 10;

			is_end_of_num = 0;
		}
		else if (*s == '-' || *s == '+')
		{
			if (*s == '-' && num > 0)
				sign *= -1;
		}
		else if (*s != ' ')
			is_end_of_num = 1;

		length--;
	}

	return (sign * num);
}
