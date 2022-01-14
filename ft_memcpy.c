/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:26:24 by thera             #+#    #+#             */
/*   Updated: 2021/10/16 22:44:35 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;

	dest_ptr = (char *) dest;
	src_ptr = (char *) src;
	if (dest == NULL && src == NULL && n != 0)
		return (NULL);
	while (n-- > 0)
		*dest_ptr++ = *src_ptr++;
	return ((void *) dest);
}
