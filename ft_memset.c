/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:22:55 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 11:48:56 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len) //llenamos un bloque de memoria con un valor especifico
{
	unsigned char	*b_char;

	b_char = b;
	while (len--)
		*b_char++ = (unsigned char)c; //le indicamos de c sera igual que "b_char"
	return (b);
}
