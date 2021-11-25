#include "ft_printf.h"

int	ft_printf(const char *str, ...);
int	main(void)
{
	int a = 10;
	int *b = &a;
	// puntero
	printf("pointer\n");
	printf(("\n%d\n"), printf("%p\n", b));
	ft_printf("%p\n", b);
	//int
	printf("decimals\n");
	printf(("\n%d\n"), printf("%d %i %u", 3, 4, 7));
	ft_printf("%d %i %u", 3, 4, 7);
	// hexadecimal
	printf("hexadecimals: \n");
	printf(("\n%d\n"), printf("%x %X", 10, 10));
	ft_printf("%x %X", 10, 10);
	// string
	printf("string: \n");
	printf(("\n%d\n"), printf("%s %c", "hola", 'c'));
	ft_printf("%s %c", "hola", 'c');
	
}
