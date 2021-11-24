/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:38:51 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/24 14:53:22 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory_block, int search_char, size_t size)
{
	unsigned char	*str;
	unsigned char	c;
	size_t			i;

	str = (unsigned char *)memory_block;
	c = (unsigned char)search_char;
	i = 0;
	while (i < size)
	{
		if (str[i] == c)
			return ((void *) str + i);
		i++;
	}
	return (NULL);
}


#include <stdio.h>


int main (void)
{
   char * str = "Une S de caracteres !";
   char * ret = NULL;

   ret = ft_memchr (str, 'd', 12);
   printf ("ret = %s\n", ret);

   return 0;
}
