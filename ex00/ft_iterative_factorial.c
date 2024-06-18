//#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (result);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int	main()
{
	int n;

	n = 5;
	printf("%i", ft_iterative_factorial(n));

	return 0;
}