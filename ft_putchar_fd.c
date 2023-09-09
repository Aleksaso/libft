/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:22:00 by asilva-o          #+#    #+#             */
/*   Updated: 2023/09/09 18:41:54 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char c;

	c = 'a';
	ft_putchar_fd(c, 1);
	return (0);
}

la funcion ft_putchar_fd escribe el caracter c
primero creamos la declaracion de la funcion ft_putchar_fd que recibe
un char y un int y no devuelve nada.
luego escribimos en el fd el char c y
el 1 que es el numero de bytes que queremos escribir.

*/
