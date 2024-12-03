/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:55:12 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/16 00:23:54 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/* int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 3;
	ft_ultimate_div_mod(&num1, &num2);
	printf("div = %d\nmod = %d", num1, num2);
	return (0);
}
 */