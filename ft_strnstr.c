/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:47:30 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/24 17:21:40 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t i;
	size_t word;

	i = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[i] && i < size)
	{
		j = 0;
		while ((str[i + word] == to_find[j] || to_find[i] != '\0') && i < size)
		{
			if (to_find[j] == '\0')
				return ((char *) str (i - j));
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}

