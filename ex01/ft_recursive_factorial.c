//#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
    int number = 5;
    int result = ft_recursive_factorial(number);
    
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}