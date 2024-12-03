/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:55:37 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/24 23:06:30 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grid_utils.h"
#include "is_valid.h"
#include "parse_input.h"
#include "print_grid.h"
#include "solve.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	constraints[16];
	int	grid[4][4];

	initialize_grid(grid);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!parse_input(argv[1], constraints))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (solve(grid, 0, 0, constraints))
		print_grid(grid);
	else
		write(1, "Error\n", 6);
	return (0);
}
