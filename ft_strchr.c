/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:25:55 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/24 11:10:59 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find_char)
{
	while (*str)
	{
		if (*str != (char)to_find_char)
			str++;
		else
			return ((char *)str);
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
	char str[] = "hello tout le monde";
	char c = 'o';

	printf("%s",ft_strchr(str, c));
}	
