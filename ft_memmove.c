/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:46:37 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 15:08:04 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copia una string a otra sin superposicion
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;

	csrc = (char *) src;
	cdest = (char *)dest;
	if (dest == 0 && src == 0) 
		return (0);
		// 'sumamos csrc + n' para evitar que se dest y src se superpongan
	if (csrc < cdest && csrc + n > cdest)
	{
		//avanzamos ambos punteros hacia adelente por 'bytes',
		// se hace para que los punteros apunten al final de la region de memoria que queremos copiar.
 		cdest += n;
		csrc += n;
		//copiamos los datos de manera inversa desde el final hacia el principio,
		// se hace para asegurar que los datos se copien correctamente
		while (n--) 
			*--cdest = *--csrc;
	}
	else // si no hay superposicion entre las 2 string se copian directamente
	{
		while (n--)
			*cdest++ = *csrc++;
	}
	return (dest);
}

/* int main()
{
    char src[] = "Hello, world!";
    char dest[20];


    ft_memmove(dest, src, sizeof(src));

    printf("El contenido de dest después de copiar desde src: %s\n", dest);

    return 0;
} */