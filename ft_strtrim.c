/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:18:37 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:43:15 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!set || !s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	result = ft_substr(s1, i, j - i + 1);
	return (result);
}

/*int	main(void)
{
	char	*s1 = "Pablitos";
	char	*set = "s";
	printf("%s\n", ft_strtrim(s1, set));
	return(0);
}

strtrim: Reserva memoria (con malloc(3)) y devuelve la copia de la cadena
pasada como argumento sin los caracteres indicados en el set inicial y final.

s1: La cadena que hay que recortar.
set: El set de referencia de caracteres que hay que recortar.
*/
