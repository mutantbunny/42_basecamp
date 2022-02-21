#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char a[] = "abcde";
	char b[] = "xyz";
	
	printf("Before: Source: %s, Destination: %s\n", b, a);
	ft_strncpy(a, b, 5);
	printf("After: Source: %s, Destination: %s\n", b, a);
	printf("Detailed destination contents:\n");
	for (int n = 0; n < (int)sizeof(a); n++)
		printf("Char %d = %d\n", n, a[n]);
}