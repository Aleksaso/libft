/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:30:45 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:36 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (*p1 == *p2 && --n > 0)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}

/*int	main(void)
{
	char	a[] = "Hello";
	char	b[] = "hello";

	printf("%d\n", ft_memcmp(a, b, 4));
}

la funcion memcmp compara los primeros n bytes de la memoria apuntada por s1 con
los primeros n bytes de la memoria apuntada por s2.

devuelve un entero menor, igual o mayor que cero, si S1 es menor, igual o mayor
que s2 respectivamente.

inciializamos las variables p1 y p2 como punteros a unsigned char. si n es igual
a 0, retornamos 0. mientras p1 sea igual a p2 y n sea mayor que 0, aumentamos p1
y p2 y disminuimos n. retornamos p1 - p2.

*/
