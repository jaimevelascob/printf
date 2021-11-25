#include "ft_printf.h"

int	ft_printf(const char *str, ...);
int	main(void)
{
	int LONG_MAX = 9223372036854775808;
	int LONG_MIN = -9223372036854775808;
	int INT_MAX = 2147483647;
	int INT_MIN = 2147483648;
	int	ULONG_MAX = 4294967295; 
	
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
	/*
	// hexadecimal
	printf("hexadecimals: \n");
	printf(("\n%d\n"), printf("%x %X", 10, 10));
	ft_printf("%x %X", 10, 10);
	// string
	printf("string: \n");
	printf(("\n%d\n"), printf("%s %c", "hola", 'c'));
	ft_printf("%s %c", "hola", 'c');
	printf("datos: \n%d\n", printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", 8, -12, 123456789, 0, -12345678, "abcdefghijklmnop", 'a', 97, 44444444, 4294967, 4294967));	
			ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", 8, -12, 123456789, 0, -12345678, "abcdefghijklmnop", 'a', 97, 44444444, 4294967, 4294967);	
		printf("datos: %d\n", printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));	
	ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	*/

}
