/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:33:04 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:41:35 by astefane         ###   ########.fr       */
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
	 // Convierte el int a char y lo pasa a positivo
		nl *= -1;
	// multiplicamos 'char' que vale 1 byte por la longitud y le indicamos que guarde byte por byte
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
			// se calcula el sobrante de una division y le sumamos '0'(48 en ascii) para iterarlo
			result[len] = (nl % 10) + '0';
			// elimina el ultimo digito y va iterando hacia la derecha
			nl = (nl - (nl % 10)) / 10;
		}
		if (n < 0)
		//Si el numero es negativo con este 'if' se lo pondremos
			result[len] = '-';
	}
	return (result);
}
