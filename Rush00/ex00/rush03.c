/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussef <ryoussef@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:16:14 by ryoussef          #+#    #+#             */
/*   Updated: 2024/11/17 23:30:18 by ryoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// print the rows and collums and dicides what is going to print
void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == 1))
				ft_putchar('A');
			else if ((i == 1 && j == x) || (i == y && j == x))
				ft_putchar('C');
			else if (i == 1 || i == y)
				ft_putchar('B');
			else if (j == 1 || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
