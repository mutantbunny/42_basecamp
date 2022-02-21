#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	a[] = "abcxy";
	char	b[] = "sEb";
	char	c[] = "35#";
	char	d[] = "C35";
	char	e[] = "";

	printf("Test array a (should return 1): Return = %d\n", ft_str_is_lowercase(a));
	printf("Test array b (should return 0): Return = %d\n", ft_str_is_lowercase(b));
	printf("Test array c (should return 0): Return = %d\n", ft_str_is_lowercase(c));
	printf("Test array d (should return 0): Return = %d\n", ft_str_is_lowercase(d));
	printf("Test array d (should return 1): Return = %d\n", ft_str_is_lowercase(e));
}
