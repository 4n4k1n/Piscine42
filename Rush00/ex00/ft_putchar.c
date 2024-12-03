/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoussef <ryoussef@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:16:38 by ryoussef          #+#    #+#             */
/*   Updated: 2024/11/17 23:30:22 by ryoussef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// print the character thats was putin the funktion
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
