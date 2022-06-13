#include <unistd.h>

void  ft_putchar(char c)
{
	write(1, &c, 1);
}

void  ft_print_alphabet(void)
{
	char letter;

	letter = 0x61;

	while ( letter <= 0x7A )
	{
		ft_putchar(letter);
		letter++;
	}
}
