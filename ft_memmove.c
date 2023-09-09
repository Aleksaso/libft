/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:55 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:45 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t length)
{
	unsigned char	*destination1;
	unsigned char	*source1;
	unsigned int	i;

	destination1 = (unsigned char *)destination;
	source1 = (unsigned char *)source;
	i = 0;
	if (destination1 == NULL && source1 == NULL)
		return (destination);
	if (destination1 > source1)
	{
		while (length-- > 0)
		{
			destination1[length] = source1[length];
		}
	}
	else
	{
		while (i < length)
		{
			destination1[i] = source1[i];
			i++;
		}
	}
	return (destination);
}

/*int	main(void)
{
	char	destination[30] = "Que lindo, estaba un calor!";
	char	source[30] = "fue Maravilloso";
	ft_memmove(destination, source, 4);
	printf("Cuentame: %s\n", destination);
	return (0);
}

memmove copia n bytes de la cadena de origen a la cadena de destino.

La copia se realiza de forma que si las áreas de memoria se solapan, el
contenido de la cadena de origen se copia antes de que se modifique.

La función devuelve un puntero a la cadena de destino declarada en el
parámetro de la función.

llamamos unsigned char a las variables de tipo char que no pueden
ser negativas.
creamos dos arrays destination y source de tipo char y los inicializamos
con cadenas de igualamos la i a 0. si destination1 es mayor que source1,
entonces mientras length sea mayor que 0, destination1[length] es igual a
source1[length].

si no, mientras i sea menor que length, destination1[i]
es igual a source1[i]. imprimimos el array destination1.

*/
