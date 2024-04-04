/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:24:51 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 16:23:17 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len) // extraemos una subcadena de una cadena dada desde un indice y longitud determinada
{
	char	*sub;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = ft_calloc(1, sizeof(char)); //almacenamos un solo byte
		if (!sub)
			return (NULL);
		return (sub);
	}
	new_len = ft_strlen(s + start);
	if (new_len > len)// con esto le decimos que si es mayor que len que 'new_len' sea del mismo tamaño que 'len'
		new_len = len; 
	sub = (char *)malloc((new_len + 1) * sizeof(char)); //lo multipicamos por char para almacenar solo 1 byte
	if (!sub)
		return (NULL);
	sub[new_len] = '\0';
	while (new_len--) //copiamos desde la cadena origen 's' a la subcadena 'sub'
		sub[new_len] = s[start + new_len]; //en cada iteracion del bucle, 
											//se asigna el caracter de la posicion s[start + new_len]
											//de la cadena original 's' a la subcadena 'sub'
	return (sub);
}

/* int	main(void)
{
	char	*s = "hola";
	int		start = 3;
	char	*result = ft_substr(s, start, 2);
	printf("la substring es %s\n", result);
	free(result);
	return (0);
}
 */