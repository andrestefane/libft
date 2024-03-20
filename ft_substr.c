/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:24:51 by astefane          #+#    #+#             */
/*   Updated: 2024/03/18 16:32:38 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	d;
	char	*subs;

	i = 0;
	d = 0;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs || !s)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (i >= start && d < len)
		{
			subs[d] = s[i];
			d++;
		}
		i++;
	}
	subs[d] = '\0';
	return (subs);
}
