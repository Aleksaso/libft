/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:31:52 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:31:52 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*str;
	char	*res;

	str = "Hola Makina";
	res = ft_strdup(str);
	printf("%s\n", res);
}

la funcion strdup duplica una cadena. recibe como parametro un puntero
a la cadena que queremos duplicar.

declaramos las variables i y len que
inicializamos en 0. luego creamos un ciclo while que mientras s1 en la
posicion len sea diferente de 0, incrementamos len.

luego declaramos un puntero ptr que apunta a un espacio de memoria
del tamaño de len + 1. si ptr es igual a NULL, devolvemos NULL.

luego creamos un ciclo while
que mientras s1 en la posicion i sea diferente de 0, ptr en la posicion
i sera igual a s1 en la posicion i. incrementamos i. ptr en la posicion
len sera igual a 0. devolvemos ptr.

*/
