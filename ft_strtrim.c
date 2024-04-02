/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:27:01 by astefane          #+#    #+#             */
/*   Updated: 2024/04/02 12:50:32 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_guessing(char const *s1, char c) //recorre la string hasta encontrar 'c'
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c) //si el caracter de s1 es igual a c devuelve 1
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set) //eliminamos los caractecteres de la string 'set' tanto al principio como al final de la string 's1'
{
	size_t	i;
	char	*new;
	size_t	len;
	size_t	x;

	i = 0;
	x = 0;
	if (!s1)
		return (NULL);
	while (ft_number_guessing(set, s1[i]) && s1[i]) //recorre la string 's1' desde principio  hasta encontrar el primer caracter que no en el conjuto de caracteres de 'set'
		i++;
	len = ft_strlen(s1);
	while (ft_number_guessing(set, s1[len - 1]) && (len - 1)) //recorre la string 's1' y elimina caracteres que no estan en el conjuto de caracteres de 'set'
		len--; // con s1[len -1] accedemos al ultimo caracterer de la string y (len - 1)) mientras len sea mayor a 1 seguira avanzando
	if (len < i) // se encarga de ajustar la longitud de len
		len = i;
	new = malloc(len - i + 1); //len - i eliminamos los caracteres del conjuto 'set' del principio de la string 's1'
	if (!new)
		return (NULL);
	while (i < len)
		new[x++] = s1[i++];
	new[x] = '\0';
	return (new);
}
