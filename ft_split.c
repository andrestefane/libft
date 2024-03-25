/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:13:11 by astefane          #+#    #+#             */
/*   Updated: 2024/03/25 14:14:53 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_split_string(char *s, const char *set)
{
	int		count;
	int		i;
	char	**array;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_strchr(set, s[i]))
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && !ft_strchr(set, s[i]))
				i++;
		}
	}
	array = (char **)malloc(sizeof(char *) * (count +1));
	if (!array)
		return (NULL);
	return (array);
}

static	char	**ft_delemiter(char *s, const char *set)
{
	char	**array;
	int		i;
	int		count;
	int		start;

	array = ft_split_string(s, set);
	i = 0;
	count = 0;
	if (!array)
		return (NULL);
	while (s[i])
	{
		while (s[i] && ft_strchr(set, s[i]))
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && !ft_strchr(set, s[i]))
				i++;
			array[count++] = ft_substr(s + start, 0, i - start);
		}
	}
	array[count] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s || !c)
		return (NULL);
	result = ft_delemiter((char *)s, &c);
	return (result);
}
