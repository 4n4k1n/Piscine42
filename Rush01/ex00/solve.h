/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:49:15 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 21:52:23 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

# include "check_visibility.h"
# include "is_valid.h"

int	solve(int grid[4][4], int row, int col, int *constraints);

#endif