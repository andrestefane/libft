/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:20:15 by astefane          #+#    #+#             */
/*   Updated: 2024/04/04 15:05:05 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n) //compara los bytes de 2 strings 
{
	int	i;

	i = 0;
	while (n && s1[i] && (s1[i] == s2[i])) //comparamos las strings hasta alcanzar el numero de n
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i)); //devolvemos la diferencia de bytes
	}
}

/* int	main(void)
{
	char	*s1 = "haaaola";
	char	*s2 = "hola";
	int		result = ft_strncmp(s1, s2, 3);
	if(result == 0)
		printf("las strings son iguales%d\n",result);
	else if (result < 0)
		printf("la primera string es mas pequeña por %d\n", result);
	else
		printf("la seguda string es mas grande por %d\n", result);
	return (0);
}
 */