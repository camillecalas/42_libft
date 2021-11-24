/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:14:28 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/24 16:46:38 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);
int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
char	*ft_strchr(const char *str, int to_find_char);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_memset(void *sentence, int value, size_t count);
void	*ft_memchr(const void *memory_block, int search_char, size_t size);
void	*ft_memcpy(void *dest, const void *source, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t n);


#endif
