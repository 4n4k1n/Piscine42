/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_bottom.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:09:56 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 22:33:39 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_col_bottom.h"

int	check_col_bottom(int grid[4][4], int *constraints)
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
			if (grid[j][i] > max)
			{
				max = grid[j][i];
				count++;
			}
			j--;
		}
		if (count != constraints[i + 4])
			return (0);
		i++;
	}
	return (1);
}
