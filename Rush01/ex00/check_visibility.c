/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:10:58 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 22:24:23 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_visibility.h"

int	check_visibility(int grid[4][4], int *constraints)
{
	return (check_col_top(grid, constraints) && check_col_bottom(grid,
			constraints) && check_row_left(grid, constraints)
		&& check_row_right(grid, constraints));
}
