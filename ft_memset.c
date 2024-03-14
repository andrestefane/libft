/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:22:55 by astefane          #+#    #+#             */
/*   Updated: 2024/03/13 15:35:35 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, char c, int len)
{
	char	*b_char;

	b_char = (char *)b;
	if (b == 0)
	{
		return (0);
	}
	while (*b_char && len > 0)
	{
		*b_char = c;
		b_char++;
		len--;
	}
	return (b);
}
