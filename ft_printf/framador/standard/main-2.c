#include "../ft_printf.h"
#include <limits.h>
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_printf("\nmine:%p\n%p\n", LONG_MIN, LONG_MAX));
	printf("%d\n", printf("\norig:%p\n%p\n", LONG_MIN, LONG_MAX));
	printf("%d\n", ft_printf("\nmine:%p\n%p\n", ULONG_MAX, -ULONG_MAX));
	printf("%d\n", printf("\norig:%p\n%p\n", ULONG_MAX, -ULONG_MAX));
}
