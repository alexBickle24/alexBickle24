/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 03:25:38 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/25 17:09:18 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (src);
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i + j] != '\0' && src[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&src[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*int     main(void)
{	
    char    cadena1[] = "holan juan an juan pan ans";
    char    cadena2[] = "lan";
    printf("%s\n", (ft_strstr(cadena1, cadena2)));
//    printf("%s\n", strstr(cadena1, cadena2));
}*/
