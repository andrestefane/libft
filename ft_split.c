/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:13:11 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 13:44:32 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0; //la inicializamos aqui para asegurarnos de que tenga el valor correcto
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	ft_freelst(char **lst, int i)
{
	while (i >= 0)
		free(lst[i--]);
	free(lst);
}

static char	**ft_word_split(char **lst, char const *s, char c, int i)
{
	size_t	wlen;

	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				wlen = ft_strlen(s);
			else
				wlen = ft_strchr(s, c) - s;
			lst[i] = ft_substr(s, 0, wlen);
			if (lst[i] == NULL)
			{
				ft_freelst(lst, i - 1);
				return (NULL);
			}
			s += wlen;
			i++;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c) //dividimos una cadena de caracteres en subcadenas mas pequeñas basadas en un delimitador
{
	char	**lst;
	int		i;

	i = 0;
	lst = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	lst = ft_word_split(lst, s, c, i);
	if (!lst)
		return (NULL);
	else
		return (lst);
}
