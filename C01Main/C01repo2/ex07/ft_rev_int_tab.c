/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:18:48 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/14 05:51:47 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	*left;
	int	*right;
	int	x;

	*left = tab[0];
	*right = tab[size - 1];
	i = 0;
	while (i < size / 2)
	{
		x = *left;
		*left = *right;
		*right = x;
		left = left + 1;
		right = right - 1;
		i++;
	}
}
