/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:32:24 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/25 18:12:57 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}
void	ft_putbnr(int nb)
{
	if (nb = -2147483648)
	{
		write (1, "-2147483648", 11);
		return (0);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		nb = nb + '0';
		ft_putchar(nb);
}	
