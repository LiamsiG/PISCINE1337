void  ft_reverse_tab_int(int *tab, int size)
{
	int left = 0;
	int right = 0;

	int temp;

	while ( right <= size )
	{
		right++;
	}
	right--;

	while ( left < right ) 
	{
	        temp = tab[right];
		tab[right--] = tab[left];
		tab[left++] = temp;
	}
}
