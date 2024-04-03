/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:49:35 by astefane          #+#    #+#             */
/*   Updated: 2024/04/03 15:46:02 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1) // se utiliza para duplicar una cadena de caracteres
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (dup != NULL)
	{
		ft_strlcpy(dup, s1, len + 1);
	}
	return (dup);
}

/* int	main(void)
{
	char	*string;
	char	*result;

	string = "hola mundo";
	result = ft_strdup(string);
	printf("la string es %s\n", result);
} */