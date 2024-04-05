/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:27:01 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 13:04:53 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//recorre la string hasta encontrar 'c'
static int	ft_number_guessing(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
	//si el caracter de s1 es igual a c devuelve 1
		if (s1[i++] == c)
			return (1);
	return (0);
}

//eliminamos los caractecteres de la string 'set' tanto al principio como al final de la string 's1'
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new;
	size_t	len;
	size_t	x;

	i = 0;
	x = 0;
	if (!s1)
		return (NULL);
	//recorre la string 's1' desde principio  hasta encontrar el primer caracter que no en el conjuto de caracteres de 'set'
	while (ft_number_guessing(set, s1[i]) && s1[i])
		i++;
	len = ft_strlen(s1);
	//recorre la string 's1' y elimina caracteres que no estan en el conjuto de caracteres de 'set'
	// con s1[len -1] accedemos al ultimo caracterer de la string 
	// (len - 1)) mientras len sea mayor a 1 seguira avanzando
	while (ft_number_guessing(set, s1[len - 1]) && (len - 1))
		len--;
		// se encarga de ajustar la longitud de len
	if (len < i) 
		len = i;
		 //len - i eliminamos los caracteres del conjuto 'set' del principio de la string 's1'
	new = malloc(len - i + 1);
	if (!new)
		return (NULL);
	while (i < len)
		new[x++] = s1[i++];
	new[x] = '\0';
	return (new);
}

/* int	main(void)
{
	char	*s = "holaho";
	char	*set = "ho";
	char	*result = ft_strtrim(s, set);
	printf("la cadena es %s\n", result);
	free(result);
	return (0);
} */