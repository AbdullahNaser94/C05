//#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int main()
{
    int number = 2;
    int power = 3;
    int result = ft_iterative_power(number, power);
    printf("%d to the power of %d is %d\n", number, power, result);
    return 0;
}