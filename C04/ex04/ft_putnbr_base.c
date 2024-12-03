/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:27:47 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/27 20:24:25 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_it(long long int nbr, char *base, int len)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr >= len)
		ft_print_it(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	i;

	len = -1;
	while (base[++len])
	{
		i = -1;
		while (base[++i])
		{
			if (base[i] == base[len] && i != len)
				return ;
		}
		if (base[len] == '+' || base[len] == '-' || base[len] == ' ')
			return ;
	}
	if (len < 2)
		return ;
	ft_print_it((long long int)nbr, base, len);
}

/* int	main(void)
{
	ft_putnbr_base(12345, "0123456789abcdf");
	return (0);
} */
