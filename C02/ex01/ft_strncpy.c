void  *strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while ( i < n && src[i] != '\0' )
	{

		dest[i] = src[i];

		i++;
	}

	dest[i] = '\0';
}
