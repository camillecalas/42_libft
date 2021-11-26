/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:48:38 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/25 16:10:53 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char		*dst;
	const char	*src;
	size_t		i;

	dst = (char *)destination;
	src = (char *)source;
	i = 0;
	if (!src && !dst)
		return (NULL);
	if (src <= dst)
	{
		dst = dst + (n - 1);
		src = src + (n - 1);
		while (i < n)
		{
			*dst = *src;
			dst--;
			src--;
			i++;
		}
	}
	else
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
