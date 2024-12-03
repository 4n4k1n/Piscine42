/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:15:03 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 22:34:43 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_row_right.h"

int	check_row_right(int grid[4][4], int *constraints)
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
		j = 3;
		while (j >= 0)
		{
			if (grid[i][j] > max)
			{
				max = grid[i][j];
				count++;
			}
			j--;
		}
		if ((count != constraints[i + 12]))
			return (0);
		i++;
	}
	return (1);
}
