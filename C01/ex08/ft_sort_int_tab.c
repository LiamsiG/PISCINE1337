void  ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int j;

	int temp;

	while ( i < size ) 
	{
		j = i;

		while ( j <= size ) 
		{
			j++;

			if ( tab[i] > tab[j] ) 
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
		}
		i++;
	}
}
