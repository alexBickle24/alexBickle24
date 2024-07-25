/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebamain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:05:04 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/18 16:46:10 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	main(int a, char **args)
{
	int i = 0;
	while (args[1][i] != '\0')
	{
		if (args[1][i] >= '0' && args[1][i] <= '4')
		{
			printf("Numero encontrado \n");
		}
		i++;
	}
}

