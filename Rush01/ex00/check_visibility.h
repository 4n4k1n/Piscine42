/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvarun <mvarun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:34:15 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/23 22:49:33 by mvarun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_VISIBILITY_H
# define CHECK_VISIBILITY_H

# include "check_col_bottom.h"
# include "check_col_top.h"
# include "check_row_left.h"
# include "check_row_right.h"

int	check_visibility(int grid[4][4], int *constraints);

#endif