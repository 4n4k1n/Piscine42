/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:05:30 by apregitz          #+#    #+#             */
/*   Updated: 2024/12/01 14:17:10 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int	ft_sqrt(int nb)
{
	int	check;

	check = 1;
	while (ft_iterative_power(check, 2) < nb)
		check++;
	if (ft_iterative_power(check, 2) == nb)
		return (check);
	else
		return (0);
}

/* #include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(48));
	return (0);
} */