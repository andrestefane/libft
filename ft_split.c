/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:13:11 by astefane          #+#    #+#             */
/*   Updated: 2024/04/03 15:20:51 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c) //conteo de palabras
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0; 
	while (*s)
	{
		while (*s == c) //va iterando hasta que sea distinto de c
			s++;
		if (*s) //si encontramos el inicio de una nueva palabra vamos itinerando count
			count++;
		while (*s != c && *s) //itineramos 's' hasta que sea distinto de 'c', con esto encontramos el final de la cadena
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

static char	**ft_word_split(char **lst, char const *s, char c, int i) //separamos palabras
{
	size_t	wlen;

	while (*s)
	{
		while (*s == c && *s) 
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c)) //si no encontramos el caracter que se indique le damos la congitud de s
				wlen = ft_strlen(s);
			else
				wlen = ft_strchr(s, c) - s; //da la diferencia de bytes de la cadena 's' hasta el proximo delimitador 'c'
			lst[i] = ft_substr(s, 0, wlen); //nos da la nueva cadena
			if (lst[i] == NULL) //si 'lst' esta vacia vamos liberando la memoria
			{
				ft_freelst(lst, i - 1);
				return (NULL);
			}
			s += wlen; // 's' es igual a 'wlen' y avanzan a la vez
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
	lst = malloc((ft_word_count(s, c) + 1) * sizeof(char *)); //
	if (!s || !lst)
		return (NULL);
	lst = ft_word_split(lst, s, c, i); //separamos palabras y creamos subcadena 's' actual cadena 
										//'c' palabras a separar 'lst' nueva cadena
	if (!lst)
		return (NULL);
	else
		return (lst);
}

/* int	main(void)
{
	char	*s;
	char	c;
	char	**result;
	int		i;

	s = "pasas que cosas";
	c = 'a';
	i = 0;
	result = ft_split(s, c);
	while (result[i] != '\0')
	{
		printf("las nuevas cadenas son %s\n", result[i]);
		i++;
	}
	free(result);
	return (0);
} */
