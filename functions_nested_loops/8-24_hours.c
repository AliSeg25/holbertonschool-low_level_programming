void jack_bauer(void)
{
	int heure;
	int min;

	for (heure = 0; heure < 24; heure++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((heure / 10) + '0');
			_putchar((heure % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
