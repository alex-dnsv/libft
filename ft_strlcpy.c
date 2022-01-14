/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:28:30 by thera             #+#    #+#             */
/*   Updated: 2021/10/16 16:21:38 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	size_t			n;

	dst_ptr = (unsigned char *) dst;
	src_ptr = (unsigned char *) src;
	n = 0;
	while (*src++)
		n++;
	if (size-- > 0)
	{
		while (*src_ptr && size-- > 0)
			*dst_ptr++ = *src_ptr++;
		*dst_ptr = '\0';
	}
	return (n);
}
