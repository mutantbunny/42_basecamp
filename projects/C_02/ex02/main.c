#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	a[] = "ghfdksfj";
	char	b[] = "s3b";
	char	c[] = "arhy#";
	char	d[] = "";
	
	printf("Test array a (should return 1): Return = %d\n", ft_str_is_alpha(a));
	printf("Test array b (should return 0): Return = %d\n", ft_str_is_alpha(b));
	printf("Test array c (should return 0): Return = %d\n", ft_str_is_alpha(c));
	printf("Test array a (should return 1): Return = %d\n", ft_str_is_alpha(d));
}
