/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:33:04 by astefane          #+#    #+#             */
/*   Updated: 2024/03/18 14:53:47 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	nlen;
	char	c;

	nlen = ft_strlen(s2);
	c = *s2;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	if (*s2 == '\0')
	{
		return ((char *)(s1));
	}
	while (*s1 != '\0' && len >= nlen)
	{
		if (*s1 == c && ft_strncmp(s1, s2, nlen) == 0)
		{
			return ((char *)(s1));
		}
		s1++;
		len--;
	}
	return (NULL);
}
