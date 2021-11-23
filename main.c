#include "printf.h"

int	ft_printf(const char *str, ...);
int	main(void)
{
	printf(("%d\n"), printf("%x", 12222));
	ft_printf("%x", 12222);
}
