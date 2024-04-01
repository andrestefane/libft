/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:27:42 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 18:09:11 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s) //comprobamos la longitud de la sting
{
	size_t	i;

	i = 0;
	while (s[i])//recoremos la string con i 
	{
		i++;
	}
	return (i);//devolvemos lo que hemos ido sumando en la i
}
