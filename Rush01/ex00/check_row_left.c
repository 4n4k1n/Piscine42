/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_left.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:13:19 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 22:34:59 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_row_left.h"

int	check_row_left(int grid[4][4], int *constraints)
{
	int	i;
	int	j;
	int	max;
	int	count;

	i = 0;
	while (i < 4)
	{
		max = 0;
		count = 0;
		j = 0;
		while (j < 4)
		{
			if (grid[i][j] > max)
			{
				max = grid[i][j];
				count++;
			}
			j++;
		}
		if (count != constraints[i + 8])
			return (0);
		i++;
	}
	return (1);
}
