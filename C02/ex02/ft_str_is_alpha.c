#include <stdio.h>


int   ft_str_is_alpha(char *str)
{
	int i = 0;

	while ( str[i] != '\0' ) 
	{

		if ( str[i] < 'z' || str[i] > 'a' || str[i] > 'A' || str[i] < 'Z' )  
		{
			return 1;
		}

		else 
		{
			return 0;
		}
		i++;
	}
}

int main () 
{
	char i [] = "hello";
	ft_str_is_alpha(i);
}
