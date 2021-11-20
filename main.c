#include "printf.h"

int	ft_printf(const char *str, ...);
int	main(void)
{
	//printf("hola primero");
	ft_printf("%s %d %% %c, hexa mayus : %X hexa minus : %x unsigned : %u", "hola", 12, "x", 10, 10, 12);
}
