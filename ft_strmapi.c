/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:32:11 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 09:03:15 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 // toma una string y aplica una funcion a cada caracter de la string produciendo una nueva
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
		// cogemos la longitud de puntero s y lo metemos en len
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len) 
	{
		 //decimos que el 'f' es la funcion y aplica a los caracteres de la string 's'
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* static char	is_cap(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
	return (0);
}

int	main(void)
{
	char	*str = "HOLAAA";
	char	*result = ft_strmapi(str ,&is_cap);
	printf("the new string is %s\n", result);
	free(result);
	return (0);
}
 */