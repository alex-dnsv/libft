/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 00:12:36 by thera             #+#    #+#             */
/*   Updated: 2021/10/20 02:17:17 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_malloc_size(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*ptr_ret;
	size_t	malloc_size;

	if (s == NULL)
		return (NULL);
	malloc_size = ft_malloc_size(s, start, len);
	ptr = (char *) malloc(sizeof(char) * malloc_size);
	if (ptr == NULL)
		return (NULL);
	ptr_ret = ptr;
	s += start;
	malloc_size--;
	while (malloc_size-- > 0)
		*ptr++ = *s++;
	*ptr = '\0';
	return (ptr_ret);
}

static size_t	ft_malloc_size(char const *s, unsigned int start, size_t len)
{
	size_t	malloc_size;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len < start)
		malloc_size = 1;
	else if ((s_len - start) < len)
		malloc_size = s_len - start + 1;
	else
		malloc_size = len + 1;
	return (malloc_size);
}
