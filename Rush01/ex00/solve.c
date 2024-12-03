/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:20:37 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 22:23:00 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include "check_visibility.h"

int	solve(int grid[4][4], int row, int col, int *constraints)
{
	int	num;

	if (row == 4)
		return (check_visibility(grid, constraints));
	if (col == 4)
		return (solve(grid, row + 1, 0, constraints));
	num = 1;
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, row, col + 1, constraints))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
