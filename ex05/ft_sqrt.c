//#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int sqrt;

    if (nb <= 0)
        return (0);
    if (nb == 1)
        return (1);

    sqrt = 1;
    while (sqrt * sqrt <= nb)
    {
        if (sqrt * sqrt == nb)
            return (sqrt);
        sqrt++;
    }
    return (0);
}

int	main(void)
{
    printf("%d\n", ft_sqrt(25)); 
    printf("%d\n", ft_sqrt(16));
    printf("%d\n", ft_sqrt(10)); 
    printf("%d\n", ft_sqrt(0)); 
    printf("%d\n", ft_sqrt(-1)); 

	return 0;
}