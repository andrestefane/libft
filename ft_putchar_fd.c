/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astefane <astefane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:44:50 by astefane          #+#    #+#             */
/*   Updated: 2024/04/05 08:56:13 by astefane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//imprimimos un solo caracter en un descriptor especifico de archivo
void	ft_putchar_fd(char c, int fd)

{
	write(fd, &c, 1);
}
