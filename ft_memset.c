/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:22:55 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:55:55 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//llenamos un bloque de memoria con un valor especifico
void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*b_char;

	b_char = b;
	while (len--)
		*b_char++ = (unsigned char)c; //le indicamos de c sera igual que "b_char"
	return (b);
}


/* int main() {
    char buffer[20];

    ft_memset(buffer, 'A', sizeof(buffer));

    printf("El contenido del buffer después de llenarlo con 'A's: %s\n", buffer);

    return 0;
} */

