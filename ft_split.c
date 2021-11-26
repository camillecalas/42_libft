/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:15:17 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/26 14:54:55 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_separator(char s, char c)
{
	if (s == c)
		return (1);
	else
		return (0);
}

int	ft_wordlen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_separator(str[i], c))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char c)
{
	int	i;
	int	count;

	if (!str[0])
		return (0);
	i = 1;
	count = !ft_is_separator(str[0], c);
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i - 1], c)
			&& !ft_is_separator(str[i], c))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	char	*s1;
	int		i;
	int		k;

	s1 = (char *)s;
	k = 0;
	if (!s1)
		return (NULL);
	table = malloc(sizeof(char *) * (ft_wordcount(s1, c) + 1));
	if (!table)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (!ft_is_separator(s1[i], c))
		{
			table[k] = ft_strndup(&s1[i], ft_wordlen(&s1[i], c));
			if (table[k] == NULL)
				return (NULL);
			i = i + ft_wordlen(&s1[i], c);
			k++;
		}
		else
			i++;
	}
	table[k] = NULL;
	return (table);
}
