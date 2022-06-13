#include <unistd.h>

void  ft_putchar(char c)
{
	write(1, &c, 1);
}

void  ft_print_numbers()
{
	int digit;

	digit = 1;

	while ( digit <= 9 ) 
	{
		ft_putchar(digit+'0');
		digit++;
	}
}
