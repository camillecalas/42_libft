/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:35:52 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/23 17:36:26 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int to_find_char)
{
	int	lenght;

	lenght = ft_strlen(str);
	while (lenght >= 0)
	{
		if (str[lenght-1] != (char)to_find_char)
			lenght--;
		else
			return ((char *)str + lenght);
	}
	return (NULL);
}

int main()
{
	char c = 'o';
	char str[] = "hollla olle";

	printf("%s", ft_strrchr(str, c));
}
