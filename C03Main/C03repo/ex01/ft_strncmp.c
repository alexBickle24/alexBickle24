/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 02:52:40 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/25 00:13:25 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned int) s1[i] - (unsigned int) s2[i]);
		i++;
	}
	return (0);
}
/*int     main(void)
{
        int numero = 5;
        char cadena[] = "HOL-ñpasa";
        char blabla[] = "HOL-ñDISE";
        printf("%d\n", ft_strncmp(cadena, blabla, 5));
		printf("%d", strncmp(cadena, blabla, 5));
        return (0);
}*/
