/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:32:35 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:43:43 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// void	*ft_calloc(size_t count, size_t size)
// {
// 	void	*ptr1;
// 	void	*ptr2;
// 	size_t	tam;

// 	tam = count * size;
// 	ptr1 = (char *)malloc(tam);
// 	if (ptr1 == 0)
// 	{
// 		return (0);
// 	}
// 	ptr2 = ptr1;
// 	ft_bzero (ptr2, tam);
// 	return (ptr1);
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char	*s1;
// 	unsigned int	i;

// 	i = 0;
// 	s1 = s;
// 	while (i < n)
// 	{
// 		s1[i] = 0;
// 		i++;
// 	}
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	while (s[i] != '\0')
		i++;
	if (i - start < len)
		len = i - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (j < len)
		str[j++] = s[start++];
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*s = "Hola";
	printf("%s\n", ft_substr(s, 0, 2));
	printf("%s\n", ft_substr(s, 1, 2));
	printf("%s\n", ft_substr(s, 2, 2));
	printf("%s\n", ft_substr(s, 3, 2));
	printf("%s\n", ft_substr(s, 4, 2));
	return (0);
}

substr: Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres que
se encuentra entre start y len, incluyendo start y sin pasarse de len.

s: La cadena de la que se extrae la nueva cadena.

start: El índice de inicio de la nueva cadena.

len: El tamaño máximo de la nueva cadena.

declaramos varaibles de tipo size_t porque son enteros sin signo y no pueden
ser negativos y porque son del mismo tamaño que un int en la arquitectura de
64 bits (8 bytes) y en la de 32 bits (4 bytes)

así no tenemos que preocuparnos por la arquitectura.

en if (start > ft_strlen(s)) comprobamos que start no sea
mayor que la longitud de la cadena s, si es mayor devolvemos una cadena vacía.

en el while (s[i] != '\0') recorremos la cadena s hasta el final y guardamos
la longitud en i. en if (i - start < len) comprobamos que la longitud de la
cadena s menos start sea menor que len, si es menor guardamos en len la
longitud de la cadena s menos start.

en el malloc reservamos memoria para la cadena str con la longitud de
len + 1 para el caracter nulo. en el while (j < len)

recorremos la cadena s desde start hasta len y guardamos en str los
caracteres de s.

en el último caracter de str guardamos el caracter nulo y
devolvemos str que es la cadena que hemos creado con malloc y que contiene
los caracteres de s desde start hasta len incluyendo start y sin pasarse de
len.

*/
