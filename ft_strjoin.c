/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:01:57 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:42:36 by asilva-o         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		l;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	l = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	while (s1[i])
		str[k++] = s1[i++];
	while (s2[j])
		str[k++] = s2[j++];
	str[k] = '\0';
	return (str);
}

/*int	main(void)
{
	char *s1 = "El mundo ";
	char *s2 = "Esta muy loco";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	return (0);
}

strjoin: Reserva memoria (con malloc(3)) y devuelve la concatenación de los
parámetros.

 El primer parámetro se colocará al principio de la cadena, y el
segundo al final. declaramos las variables i, j, k, l. luego inicializamos i, j,
k en 0 y l en la suma de la longitud de s1 y s2.

luego reservamos memoria para str con malloc y comprobamos que no sea nulo.

luego creamos un ciclo while que mientras s1 en la posicion i sea diferente
de 0, str en la posicion k sera igual a s1 en la posicion i, incrementamos i y k.

luego creamos otro ciclo while que mientras s2 en la posicion j sea
diferente de 0, str en la posicion k sera igual a s2 en la posicion j,
incrementamos j y k. luego str en la posicion k sera igual
a 0. luego devolvemos str.

s1: La cadena que debe ser colocada al principio de la nueva cadena.
s2: La cadena que debe ser colocada al final de la nueva cadena.
*/
