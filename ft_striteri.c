/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:40:04 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 15:50:31 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *)) //aplicamos una funcion a cada caracter de la string
{
	int		len;
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		while (i < len)
		{
			(*f)(i, s); //creamos una funcion 'f' y pasariamos sus parametros 'unsigned int i y char *s'
			s++;
			i++;
		}
	}
}
