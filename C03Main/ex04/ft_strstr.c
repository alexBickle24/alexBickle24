/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 03:25:38 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/24 18:20:44 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int	i;
	int	j;
	int	josh_philips;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (src);
	while (src[i] != '\0' && src[i] != to_find[j])
	{
		i++;
	}
	josh_philips = i;
	while ((src[i] == to_find[j]) && to_find[j] != '\0')
	{
		j++;
		i++;
	}
	if (to_find[j] == 0)
		return (&src[josh_philips]);
	return (0);
}
/*int     main(void)
{	
    char    cadena1[] = "holan juan an juan pan ans";
    char    cadena2[] = "ans";
    printf("%s\n", (ft_strstr(cadena1, cadena2)));
    printf("%s\n", strstr(cadena1, cadena2));
}*/
