/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:46:37 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 13:37:50 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n) //copia datos correctamente sin que superpongan
{
	char	*csrc;
	char	*cdest;

	csrc = (char *) src;
	cdest = (char *)dest;
	if (dest == 0 && src == 0) 
		return (0);
	if (csrc < cdest && csrc + n > cdest) // 'sumamos csrc + n' para evitar que se dest y src se superpongan
	{
		//avanzamos ambos punteros hacia adelente por 'bytes', se hace para que los punteros apunten al final de la region de memoria que queremos copiar.
 		cdest += n;
		csrc += n;
		while (n--) //copiamos los datos de manera inversa desde el final hacia el principio, se hace para asegurar que los datos se copien correctamente
			*--cdest = *--csrc;
	}
	else // si no hay superposicion entre las 2 string se copian directamente
	{
		while (n--)
			*cdest++ = *csrc++;
	}
	return (dest);
}
