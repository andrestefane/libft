/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:32:11 by astefane          #+#    #+#             */
/*   Updated: 2024/04/02 11:18:51 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)) // toma una string y aplica una funcion a cada caracter de la string produciendo una nueva
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s); // cogemos la longitud de puntero s y lo metemos en len
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len) 
	{
		str[i] = f(i, s[i]); //decimos que el 'f' es la funcion y aplica a los caracteres de la string 's'
		i++;
	}
	str[i] = '\0';
	return (str);
}
