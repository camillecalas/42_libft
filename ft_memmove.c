/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:48:38 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/24 14:36:03 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char *dst;
	const char *src;
	size_t i;

	dst = (char *)destination;
	src = (char *)source;
	i = 0;
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

#include <stdio.h>


int main (void)
{
   char tab1 [] = "abcdefghijklmno";

   printf ("tab1 = %s\n", tab1);
   ft_memmove (tab1 + 5, tab1 + 2, 7);
   printf ("tab1 = %s\n", tab1);

   return 0;
}
/*
#include <stdio.h>


int main (void)
{
   char tab1 [] = "abcdefghijklmno";
   char tab2 [] = "zxcv";

   printf ("tab1 = %s\n", tab1);
   ft_memmove (tab1, tab2, 3);
   printf ("tab1 = %s\n", tab1);

   return 0;
}*/
