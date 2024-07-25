/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:52:40 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/25 11:31:36 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*int     main(void)
{
//        int numero = 5;
        char cadena[] = "\201";
        char blabla[] = "A";
        printf("%d\n", ft_strncmp(cadena, blabla, 5));
		printf("%d", ft_strncmp(cadena, blabla, 5));
        return (0);
}*/
