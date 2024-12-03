/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:26:09 by apregitz          #+#    #+#             */
/*   Updated: 2024/12/01 19:27:44 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	check;

	check = nb;
	while (ft_is_prime(check) == 0 && check < 2147483647)
	{
		check++;
	}
	if (check != 2147483647)
		return (check);
	return (0);
}

/* #include <stdio.h>
int main(void)
{
	printf("%d", ft_find_next_prime(0));
	return (0);
} */