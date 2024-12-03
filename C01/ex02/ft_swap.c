/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:39:57 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/14 20:53:53 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int num1;
	int num2;

	num1 = 1;
	num2 = 2;

	printf("a=%d   b=%d", num1, num2);
	ft_swap(&num1, &num2);
	printf("\na=%d   b=%d", num1, num2);
	return (0);
} */