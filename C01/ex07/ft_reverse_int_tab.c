void  ft_reverse_int_tab(int *tab, int size ) 
{
	int left = 0;
	int right = 0;

	while ( right < size )
	{
		right++;
	}
	right--;

	while ( left < right ) 
	{
		int temp = tab[right];
		tab[right--] = tab[left];
		tab[left++] = temp;
	}
}
