void  ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	while (  b != 0 ) 
	{
		div = *a / *b;
                
		*a = div;

		mod = *a % *b;

		*b = mod;
	}
}
