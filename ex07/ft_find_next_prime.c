//#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i) // التحقق حتى الجذر التربيعي للعدد
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1); // العدد أولي
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2) // الأعداد الأقل من 2 ليست أولية، وأول عدد أولي هو 2
		return (2);
	while (!ft_is_prime(i)) // نبحث عن العدد الأولي التالي
		i++;
	return (i); // نعيد العدد الأولي التالي
}

int	main(void)
{
	printf("Next prime after 0: %d\n", ft_find_next_prime(0)); // 2
	printf("Next prime after 1: %d\n", ft_find_next_prime(1)); // 2
	printf("Next prime after 2: %d\n", ft_find_next_prime(2)); //  2
	printf("Next prime after 14: %d\n", ft_find_next_prime(14)); // 17
	printf("Next prime after 17: %d\n", ft_find_next_prime(17)); //  17
	printf("Next prime after 18: %d\n", ft_find_next_prime(18)); //  19

	return 0;
}