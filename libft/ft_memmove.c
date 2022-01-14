/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:27:07 by thera             #+#    #+#             */
/*   Updated: 2021/10/16 16:14:13 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = (char *) dest;
	src_ptr = (const char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest_ptr > src_ptr)
	{
		while (n > 0)
		{
			*(dest_ptr + n - 1) = *(src_ptr + n - 1);
			n--;
		}
	}
	else
		while (n-- > 0)
			*dest_ptr++ = *src_ptr++;
	return ((void *) dest);
}
