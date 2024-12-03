/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:54:24 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/28 13:57:15 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb < 10)
	{
		write(1, &"0123456789"[nb], 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		write(1, &"0123456789"[nb % 10], 1);
	}
}

/* int	main(void)
{
	int	num;

	num = 123456;
	ft_putnbr(num);
	return (0);
} */
