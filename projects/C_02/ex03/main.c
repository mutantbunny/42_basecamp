#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	a[] = "38749832";
	char	b[] = "s3b";
	char	c[] = "35#";
	char	d[] = "";
	
	printf("Test array a (should return 1): Return = %d\n", ft_str_is_numeric(a));
	printf("Test array b (should return 0): Return = %d\n", ft_str_is_numeric(b));
	printf("Test array c (should return 0): Return = %d\n", ft_str_is_numeric(c));
	printf("Test array d (should return 1): Return = %d\n", ft_str_is_numeric(d));
}
