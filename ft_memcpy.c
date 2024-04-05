/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:52:47 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 15:09:22 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// copia los bytes indicado por 'n' de una string 'src' a otra string 'dst'
void	*ft_memcpy(void *dst, const void *src, size_t n) 
{
	void	*ret; // nos da mayor flexibilidad y reutilizacion del codigo ya que se puede usar para cualquier tipo de puntero

	if (!dst && !src) // si ambos son nulos significa que no hay datos que copiar y retornamos NULL
		return (NULL);
	ret = dst;
	while (n--) // vamos restando los bytes que vamos a restar
	//vamos sumando las 2 strings en 1 byte cada una para que apunten al sigueinte byte,
	// una vez copiado todos los bytes devolvemos el 'ret'
		*(char *)dst++ = *(char *)src++;
	return (ret);
}

/* int main() {
    char src[] = "Hello, world!";
    char dst[20];

    ft_memcpy(dst, src, sizeof(src));


    printf("El contenido de dst después de copiar desde src: %s\n", dst);

    return 0;
} */