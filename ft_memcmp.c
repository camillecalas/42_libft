/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:07:18 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/24 16:16:20 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = pointer1;
	p2 = pointer2;
	i = 0;
	while (i < size)
	{
		if (p1[i] != p2[i])
		{
			if (p1[i] < p2[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}


#include <stdio.h>


#define TAB_SIZE 4


int main (void)
{
   unsigned char tab1 [TAB_SIZE] = { 'a', 'b', '\0', 'c' };
   unsigned char tab2 [TAB_SIZE] = { 'a', 'b', '\0', 'c' };
   unsigned char tab3 [TAB_SIZE] = { 'a', 'b', 'c', 'h' };
   unsigned char tab4 [TAB_SIZE] = { 'a', 'b', 'a', 'h' };

   printf ("Test 1 : %d\n", ft_memcmp (tab1, tab2, TAB_SIZE));
   printf ("Test 2 : %d\n", ft_memcmp (tab2, tab3, TAB_SIZE));
   printf ("Test 3 : %d\n", ft_memcmp (tab3, tab4, TAB_SIZE));

   return 0;
}
