/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:51:22 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/24 13:57:48 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t size)
{
	char *dst;
	const char *src;
	size_t i;

	dst = (char *)dest;
	src = (char *)source;
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
int main (void)
{
   const char * str1 = "Bonjour, le monde !";
   char str2 [15] = { 0 };
 
   ft_memcpy (str2, str1, 7);
 
   printf ("str1 : %s\n", str1);
   printf ("str2 : %s\n", str2);
 
   return 0;
}*/
