/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:27:01 by astefane          #+#    #+#             */
/*   Updated: 2024/03/20 13:14:44 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_chklen(const char *s1, const char *set)
{
	size_t	end;
	size_t	len;
	size_t	start;

	start = 0;
	end = 0;
	len = 0;
	while (s1[end] != '\0')
	{
		if (ft_strchr(set, s1[end]) == NULL)
		{
			len = end - start;
		}
		end++;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*result;

	start = 0;
	end = 0;
	i = 0;
	len = ft_chklen(s1, set);
	if (len == 0)
		return (0);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = start;
	result = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[len] = '\0';
	return (result);
}
