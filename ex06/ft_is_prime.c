//#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);
    if (nb % 2 == 0)
        return (0);

    i = 3;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i += 2;
    }
    return (1);
}

int main(void)
{
    printf("Is 2 prime? %d\n", ft_is_prime(2));
    printf("Is 3 prime? %d\n", ft_is_prime(3));
    printf("Is 4 prime? %d\n", ft_is_prime(4));
    printf("Is 17 prime? %d\n", ft_is_prime(17));
    printf("Is 18 prime? %d\n", ft_is_prime(18));
    printf("Is 19 prime? %d\n", ft_is_prime(19));
    printf("Is 20 prime? %d\n", ft_is_prime(20));

    return 0;
}
