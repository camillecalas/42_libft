/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:52:06 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/25 18:29:16 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (!n)
		return ((void) NULL);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	else
		i = n;
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		i = i % 10;
	}
	ft_putchar_fd(i + 48, fd);
}
