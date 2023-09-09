/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:32:11 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:32:11 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char *array;

	array = "Hola paco";
	printf("Hola paco ocupa un espacio de:\n %zu\n", ft_strlen(array));
	return (0);
}

comprueba y calcula la longitud de una cadena s....
La strlen devuelve el número de caracteres que preceden al
carácter NUL de terminación.

que preceden a NUL o maxlen de terminación , el que sea menor inicializamos i
en 0. luego creamos un ciclo while que mientras s en la posicion i sea diferente
de 0, incrementamos i. luego devolvemos i.

*/
