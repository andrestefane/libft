/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:39:37 by astefane          #+#    #+#             */
/*   Updated: 2024/04/01 09:27:26 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sing;
	int	i;

	result = 0;
	sing = 1;
	i = 0;
	// quitamos todos los espacios
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-') 
	{
		sing = -1; // se le pone el signo negativo
		i++;
	}
	else if (str[i] == '+') // o el signo positivo
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0'); // itineramos los numeros 
		i++;
	}
	return (sing * result); //signo + numero 
}
