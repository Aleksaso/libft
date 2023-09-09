/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:32:17 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:43:00 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char a[] = "atOms\0\0\0\0";
	char	b[] = "atoms\0abc";

	printf("%d\n", ft_strncmp(a, b, 9));
	//printf("%d", strncmp(a ,b , 7));
}

en este caso se crea la funcion ft_strncmp que recibe como parametros un puntero
a la cadena s1, un puntero a la cadena s2 y el numero de caracteres a comparar.

declaramos la variable i que inicializamos en 0. mientras i sea menor que n y
s1 en la posicion i sea diferente de 0 o s2 en la posicion i sea diferente de 0,
si s1 en la posicion i es mayor que s2 en la posicion i, retornamos 1, si s1 en
la posicion i es menor que s2 en la posicion i, retornamos -1 y luego
incrementamos i. luego retornamos 0.

*/
