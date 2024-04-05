/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:40:04 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 09:03:21 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//aplicamos una funcion a cada caracter de la string

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			//indicamos que la funcion 'f' y pasariamos sus parametros 'unsigned int i y char *s'
			(*f)(i, &s[i]);
			i++;
		}
	}
}
/* static void	ft_caps(unsigned int i, char *string)
{
	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] -= 32;
		}
		i++;
	}
}

int	main(void)
{
	char	string[] = "holaa";

	ft_striteri(string, &ft_caps);
	printf("the new string is %s\n", string);
	return (0);
} */
