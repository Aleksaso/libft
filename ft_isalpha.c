/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:08 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:30:08 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_isalpha('a'));
	return (0);
}

Comprueba si el carácter es una letra. Devuelve 1 si es una letra,
y 0 si no lo es.

 ecibe como parámetro un int, que es el carácter que
se va a comprobar. Si el carácter está entre 'A' y 'Z', o entre 'a' y 'z',
devuelve 1, y si no, devuelve 0.

*/
