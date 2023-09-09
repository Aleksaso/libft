/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:01 by asilva-o          #+#    #+#             */
/*   Updated: 2023/05/12 12:30:01 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_isalnum('#'));
	return (0);
}

comprueba si el carácter es alfanumérico, es decir, si es una letra o un
número. devuelve 1 si es alfanumérico, si no lo es devuelve 0.
recibe como parámetro un int, que es el carácter que se va a comprobar.
si el carácter está entre 'A' y 'Z', o entre 'a' y 'z', o entre '0' y '9',
devuelve 1, si no lo es devuelve 0.

*/
