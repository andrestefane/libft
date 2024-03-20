/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:33:04 by astefane          #+#    #+#             */
/*   Updated: 2024/03/20 16:55:03 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	ft_minnum(int n)
{
	if (n == -2147483648)
	{
		return (-1);
	}
	return (0);
}*/

static	int	ft_intlong(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		isnegative;
	char	*buffer;

	len = ft_intlong(n);
	isnegative = 0;
	if (n < 0)
	{
		isnegative = 1;
		n = -n;
	}
	buffer = (char *)malloc((len + isnegative + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	i = len + isnegative - 1;
	while (n != 0)
	{
		buffer[i--] = '0' + (n % 10);
		n /= 10;
	}
	if (isnegative)
		buffer[0] = '-';
	buffer[len + isnegative] = '\0';
	return (buffer);
}
