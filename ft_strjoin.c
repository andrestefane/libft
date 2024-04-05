/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:17:24 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 09:03:20 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concadena 2 strings
char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*result;

	lens1 = ft_strlen(s1); 
	lens2 = ft_strlen(s2);
	// reservamos la memoria para ambas strings
	result = malloc(lens1 + lens2 + 1);
	if (!s1 || !s2)
		return (NULL);
	if (result)
	{
		 // copiamos s1 en el bloque apuntado por result con lens1
		ft_memcpy(result, s1, lens1);
		 // copiamos s2 justo despues en memoria de s1
		ft_memcpy(result + lens1, s2, lens2 + 1);
	}
	return (result);
}

/* int	main(void)
{
	char	*string1;
	char	*string2;
	char	*result;

	string1 = "-";
	string2 = "76";
	result = ft_strjoin(string1, string2);
	printf("la nueva string es %s\n", result);
	return (0);
} */