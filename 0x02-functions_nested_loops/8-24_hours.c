/**
 *jack_bauer -function that prints every minute of the day of Jack Bauer
 *Return:null
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
{
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');

		}

		}
}
