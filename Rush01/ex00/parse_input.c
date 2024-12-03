/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:44:33 by mvarun            #+#    #+#             */
/*   Updated: 2024/11/25 20:02:52 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdlib.h>
#include "parse_input.h"
#include <unistd.h>

int	parse_input(char *input, int *constrains)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (input == NULL)
		return (0);
	while (i < 16)
	{
		while (input[j] == ' ' || input[j] == '\t' || input[j] == '\n')
			j++;
		if (input[j] == '\0')
			return (0);
		if (input[j] < '1' || input[j] > '4')
			return (0);
		constrains[i++] = input[j] - '0';
		j++;
	}
	if (input[j] != '\0')
		return (0);
	return (1);
}

// int	main(void)
// {
// 	char input[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
// 	int constraints[16];
// 	parse_input(input, constraints);

// 	for (int i = 0; i < 16; i++)
// 	{
// 		char c = constraints[i] + '0';
// 		write(1, &c, 1);
// 		if (i < 15)
// 			write(1, " ", 1);
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }
