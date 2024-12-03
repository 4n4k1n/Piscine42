/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:13:24 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/16 00:23:49 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/* int	main(void)
{
	char	arr[5];

	arr[0] = 't';
	arr[1] = 'e';
	arr[2] = 's';
	arr[3] = 't';
	ft_putstr(arr);
	return (0);
}
 */