/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:31:16 by thera             #+#    #+#             */
/*   Updated: 2021/10/18 21:14:44 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst_ptr;
	char	*src_ptr;
	size_t	n;

	dst_ptr = (char *) dst;
	src_ptr = (char *) src;
	if (ft_strlen(dst) > size)
		n = ft_strlen(src) + size;
	else
		n = ft_strlen(dst) + ft_strlen(src);
	if (size-- > 0 && ft_strlen(dst) < size)
	{
		while (*dst_ptr++ && size-- > 0)
			;
		dst_ptr--;
		while (*src_ptr && size-- > 0)
			*dst_ptr++ = *src_ptr++;
		*dst_ptr = '\0';
	}
	return (n);
}
