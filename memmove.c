/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:46:37 by astefane          #+#    #+#             */
/*   Updated: 2024/03/13 17:05:42 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	int		i;

	csrc = (char *) src;
	cdest = (char *)dest;
	i = n;
	if (csrc < cdest && csrc + n > cdest)
	{
		while (n--)
			cdest[n] = csrc[n];
	}
	else
	{
		while (n--)
			*cdest++ = *csrc++;
	}
	return (dest);
}
