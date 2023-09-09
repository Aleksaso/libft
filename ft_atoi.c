/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:29:31 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:47:14 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/*int	main(void)
{
	const char a[15] = "1234";
	printf ("%d", ft_atoi(a));
	printf("%d", atoi(a));
}

biblioteca principal stdlib, es una función que convierte la
cadena de caracteres que representa un numero entero a la que apunta un
puntero en un int omite caracter de espacios en blanco, hasta que
encuentra un digito. convierte los digitos que lee en un valor entero y
devuelve ese valor.

declaramos variables globales, i, sign y res. i es el contador, sign
es el signo, y res es el resultado. inicializamos las variables, i a 0,
sign a 1 y res a 0.

hacemos un bucle while, que recorre la cadena de caracteres, y si
encuentra un espacio en blanco, un tabulador, un salto de linea,
un retorno de carro o un salto de pagina, incrementa el contador i
hasta que no encuentre ninguno de esos caracteres.

 */
