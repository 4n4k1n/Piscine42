/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:55:41 by apregitz          #+#    #+#             */
/*   Updated: 2024/12/01 12:17:55 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	if (nb < 0)
		return (0);
	fact = 1;
	i = 1;
	while (nb >= i)
	{
		fact *= i;
		i++;
	}
	return (fact);
}

/* #include <stdio.h>
int main() {
    printf("result: %d", ft_iterative_factorial(7));
    return (0);
} */