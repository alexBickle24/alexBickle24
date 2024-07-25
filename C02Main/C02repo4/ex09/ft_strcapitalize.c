/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:41:48 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/23 21:17:41 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i - 1] != '\0')
	{
		if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		if ((str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < '0' || str[i -1] > '9')
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		if (((i) == 1) && (str[i - 1] >= 'a' && str[i -1] <= 'z'))
			str[i - 1] = str[i -1] - 32;
		i++;
	}
	return (str);
}
/*int 	main(void)
{
	char	cadena[] = "salut, comment tu vas ? 42mots quarant"
	printf("%s\n",ft_strcapitalize(cadena));
	return (0);
}
int	main(int argc, char **argv)
{
	if(argc != 2)
		return(1);
	printf("%s\n", ft_strcapitalize(argv[1]));
}*/
