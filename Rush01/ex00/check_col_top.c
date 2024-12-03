/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:07:43 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 22:30:20 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_col_top.h"

int	check_col_top(int grid[4][4], int *constraints)
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
			if (grid[j][i] > max)
			{
				max = grid[j][i];
				count++;
			}
			j++;
		}
		if (count != constraints[i])
			return (0);
		i++;
	}
	return (1);
}
