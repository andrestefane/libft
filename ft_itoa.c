/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:33:04 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 09:27:20 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_digit(long num)
{
	int	cur;

	cur = 0;
	if (num == 0)
		return (1);
	if (num < 0) //se comprueba si es negativo y se le suma solo 1
		cur++;
	while (num != 0)
	{
		num = num / 10; // cada vez que divide cuenta la longitud del numero
		cur++;
	}
	return (cur);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nl;
	char	*result;

	len = num_digit(n);
	nl = n;
	if (n < 0)
		nl *= -1; // se encarga de convertir 'n' en positivo(ya que itoa conviert4e un entero en una cadena de caracteres)
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = 0;
	if (nl == 0)
		result[0] = '0';
	else
	{
		while (len--, nl != 0)
		{
			result[len] = (nl % 10) + '0';// se calcula el sobrante de una division y le sumamos '0'(48 en ascii) para iterarlo
			nl = (nl - (nl % 10)) / 10; // elimina el ultimo digito y va iterando hacia la derecha
		}
		if (n < 0)
			result[len] = '-';
	}
	return (result);
}
