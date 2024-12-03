/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:04:28 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/15 23:52:54 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	num1;
	int	num2;
	int	div;
	int	mod;

	num1 = 10;
	num2 = 3;
	ft_div_mod(num1, num2, &div, &mod);
	printf("div = %d\nmod = %d", div, mod);
	return 0;
}
 */