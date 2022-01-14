/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:42:58 by thera             #+#    #+#             */
/*   Updated: 2021/10/16 16:16:09 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		character;

	ptr = (const unsigned char *) s;
	character = c;
	while (n-- > 0)
		if (*ptr++ == character)
			return ((void *)--ptr);
	return (NULL);
}
