#include <stdio.h>
#include <time.h>
#include <limits.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb < 2)
        return (0);
    i = 1;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
	if (nb % 2 == 0)
		nb++;
    while (!(ft_is_prime(nb)))
        nb += 2;
    return (nb);
}

int main(void)
{
    clock_t start, end;
    double cpu_time_used;
    int nb;

    for (nb = 2147483607; nb <= 2147483647; nb++)
    {
        start = clock();
        int result = ft_find_next_prime(nb);
        end = clock();

        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

        if (cpu_time_used > 10.0)
        {
            printf("Error: Execution for number %d took longer than 10 seconds (%.2f seconds)\n", nb, cpu_time_used);
            break;
        }

        printf("Number: %d, Next Prime: %d, Time: %.6f seconds\n", nb, result, cpu_time_used);
    }

    return (0);
}