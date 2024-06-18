//#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
	int	val;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		val = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (val);
	}
}

int	main(void)
{
	printf("%d", ft_fibonacci(7));

	return 0;
}