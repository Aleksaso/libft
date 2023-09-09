/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:34:26 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 22:37:09 by asilva-o         ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	my_func(unsigned int i, char str)

{
	printf("Funcion interna: mover = %d y %c\n", i, str);
	return (str - 32);
}

int	main(void)
{
	char str[10] = "hello";
	printf("El resultado es %s\n", str);
	char	*result = ft_strmapi(str, my_func);
	printf("El resultado es %s\n", result);
	return (0);
}

la funcion strmapi recibe como parametros un puntero a la cadena s y un
 puntero a funcion que recibe un unsigned int y un char y devuelve un char.

 declaro la variable i que inicializo en 0 y la variable str que es un puntero
 a char que reservo memoria con malloc para la longitud de s mas 1 y compruebo
 que no sea nulo si lo es retorno nulo si no lo es,

 creo un ciclo while que mientras s en la posicion i sea diferente de 0,
 str en la posicion i sera igual
 a la funcion f con los parametros i y s en la posicion i, incremento i y al
 finalizar el ciclo str en la posicion i sera igual a 0 y retorno str.

*/
