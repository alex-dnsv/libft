/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:58:54 by thera             #+#    #+#             */
/*   Updated: 2021/10/20 00:24:01 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	ch;

	ch = c;
	ptr = (char *) s;
	while (*ptr++)
		;
	ptr--;
	while (ptr >= s)
	{
		if (*ptr == ch)
			return (ptr);
		ptr--;
	}
	return (NULL);
}
