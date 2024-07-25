/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcarril <alcarril@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 03:11:26 by alcarril          #+#    #+#             */
/*   Updated: 2024/07/25 11:21:56 by alcarril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(void)
    {
        int numero = 2;   
        char cadena[] = "HOLA";
        char blabla[] = "MUNDO";
        printf("%s\n", ft_strncat(cadena, blabla, 4));
		//printf("%s", strncat(cadena, blabla, 4));
        return (0);
        
    }*/
