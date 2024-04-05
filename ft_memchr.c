/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:10:13 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:54:45 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n) // busca la primera ocurrencia de un byte espacifico
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n--) // va restando la longitud de la string para que encuentra la ocurrencia
		if (*p != (unsigned char)c) //mientras p sea distinto a c vamos avanzando por la string p para encontrar la ocurrencia
			p++; 
	else
	{
		return (p);
	}
	return (0);
}
/* int main() {
    char str[] = "Hello, world!";
    char search_char = 'o';
    size_t n = sizeof(str); 

    void *result = ft_memchr(str, search_char, n);

    if (result != NULL) {
        int position = (char *)result - str;
        printf("Se encontró '%c' en la posición %d de la cadena.\n", search_char, position);
    } else {
        printf("'%c' no se encontró en la cadena.\n", search_char);
    }

    return 0;
} */