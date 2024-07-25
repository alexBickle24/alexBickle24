/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:42:05 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/25 00:13:40 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned) s1[i] - (unsigned) s2[i]);
		i++;
	}
	return (0);
}
/*int     main(void)
{
        char cadena[] = "aolas";
        char blabla[] = "ñ";
        printf("%d\n", ft_strcmp(cadena, blabla));
		printf("%d", strcmp(cadena, blabla));
        return (0);
}*/
