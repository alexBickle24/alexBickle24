/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:18:48 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/21 15:22:13 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*left;
	int	*right;
	int	x;

	left = tab;
	right = &tab[size - 1];
	i = 0;
	while (i < size / 2)
	{
		x = *left;
		*left = *right;
		*right = x;
		left++;
		right--;
		i++;
	}
}
