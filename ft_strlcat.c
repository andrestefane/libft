/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:25:40 by astefane          #+#    #+#             */
/*   Updated: 2024/03/13 17:14:50 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		x;
	int		st_len;

	st_len = ft_strlen(dst);
	x = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (x);
	while (dst[i] && i < size - 1)
	{
		i++;
	}
	while (*src && i < size - 1)
	{
		dst[i++] = *src++;
	}
	dst[i] = '\0';
	return (st_len + x);
}
/*int main(void)
{
    char dst[20] = "Hello ";
    const char *src = "world!";
    size_t size = sizeof(dst);

    printf("Initial dst: %s\n", dst);
    printf("src: %s\n", src);
    printf("size: %zu\n", size);

    int result = ft_strlcat(dst, src, size);

    printf("Concatenated string: %s\n", dst);
    printf("Resulting length: %d\n", result);

    return 0;
}*/
