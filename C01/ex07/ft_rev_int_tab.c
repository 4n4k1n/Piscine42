/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:23:35 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/16 23:19:52 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	len_l;
	int	len_r;
	int	temp;

	len_l = 0;
	len_r = size - 1;
	while (len_l <= size / 2)
	{
		temp = tab[len_l];
		tab[len_l] = tab[len_r];
		tab[len_r] = temp;
		len_l++;
		len_r--;
	}
}

/* int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;

	ft_rev_int_tab(arr, size);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
 */
