/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:53:16 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:40:52 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	ft_negative(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static size_t	ft_number_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	pos;
	size_t	digt;

	digt = ft_number_len(n);
	res = ft_calloc(digt + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	pos = digt - 1;
	while (n != 0)
	{
		res[pos] = ft_negative(n % 10) + '0';
		n = n / 10;
		pos--;
	}
	return (res);
}

/*int	main(void)
{
	int	n;
	char	*res;

	n = -2147483648;
	res = ft_itoa(n);
	printf("%s\n", res);
	return (0);
}

convierte un número entero en una cadena de caracteres. devuelve la cadena de
caracteres que representa el número entero recibido como argumento. la cadena
debe ser liberada con free(3). devuelve la cadena de caracteres que representa
el número entero recibido como argumento. NULL si falla la asignación de
memoria.

static negative: convierte el número en positivo, si es negativo y lo devuelve
como un int positivo.

static number_len: calcula la longitud del número, para saber el tamaño de la
cadena de caracteres que vamos a devolver.

ft_calloc: reserva la memoria para la cadena de caracteres que vamos a devolver.
si no se puede reservar la memoria, devuelve NULL.

ft_bzero: pone a cero la zona de memoria que hemos reservado.

si el número es 0, la primera posición de la cadena de caracteres reservada,

declaramos las variables pos y digt, que son de tipo size_t, que es un tipo de
dato de 8 bytes, y las igualamos a la longitud del número, para saber el tamaño
de la cadena de caracteres que vamos a devolver y la posición de la cadena de
caracteres que vamos a rellenar con el número.

 res es igual a ft_calloc(digt + 1, sizeof(char)), que es la función que
reserva la memoria para la cadena de caracteres que vamos a devolver, y le
pasamos como parámetros digt + 1, que es el tamaño de la cadena de caracteres
que vamos a devolver, y sizeof(char), que es el tamaño de cada elemento de la
cadena de caracteres que vamos a devolver.

*/
