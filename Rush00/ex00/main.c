/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussef <ryoussef@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:16:28 by ryoussef          #+#    #+#             */
/*   Updated: 2024/11/17 23:30:20 by ryoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

// convert the string into a int number
// check if the number have only digits 
// check if the number is not bigger than the max int
int	convert_c(char *str)
{
	long long int	num;
	int				int_max;
	int				num_return;

	int_max = 2147483647;
	num = 0;
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
		{
			write(1, "Error: unvalid argument!!!\n", 27);
			return (-1);
		}
		else if (((num * 10) + (*str - '0')) > int_max)
		{
			write(1, "Number is to big!!!\n", 20);
			return (-1);
		}
		num = (num * 10) + (*str - '0');
		str++;
	}
	num_return = num;
	return (num_return);
}

// check if the the arguments are valid
int	main(int ac, char *av[])
{
	int	num1;
	int	num2;

	if (ac != 3)
	{
		write(1, "Not the right number of arguments!!!\n", 38);
		return (1);
	}
	num1 = convert_c(av[1]);
	num2 = convert_c(av[2]);
	if (num1 <= 0 || num2 <= 0)
		return (1);
	rush(num1, num2);
	return (0);
}
