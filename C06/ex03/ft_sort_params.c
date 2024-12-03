/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 20:09:10 by apregitz          #+#    #+#             */
/*   Updated: 2024/12/01 21:36:31 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	print_arrays(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*p_temp;

	i = 1;
	while (i < ac)
	{
		j = 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) < 0)
			{
				p_temp = av[i];
				av[i] = av[j];
				av[j] = p_temp;
			}
			j++;
		}
		i++;
	}
	print_arrays(ac, av);
	return (0);
}
