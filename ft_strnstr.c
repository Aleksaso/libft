/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:32:23 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:43:05 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
			i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
				++j;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (0);
}

/*int	main(void)
{
	const char a[] = "loren ipsum ";
	char busca[] = "en";
	char *ptr;

	ptr = ft_strnstr(a, busca, 15);
	printf("%s\n", ptr);
}

la funcion ft_strnstr recibe como parametros un puntero a la cadena
haystack, un puntero a la cadena needle y el numero de caracteres
a comparar.

declaramos dos variables de tipo size_t, i y j. si el primer caracter de
needle es nulo, devuelve un puntero a la cadena haystack. si no,
inicializamos i a 0.

mientras haystack[i] no sea nulo y i sea menor que len, si haystack[i]
es igual al primer caracter de needle,

inicializamos j a 1. mientras needle[j] no sea nulo y haystack[i + j]
sea igual a needle[j] y i + j sea menor que len, incrementamos
j. si needle[j] es igual a nulo, devolvemos un puntero a la cadena
 haystack. incrementamos i. si no, devolvemos 0.

*/
