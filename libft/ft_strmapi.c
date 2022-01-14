/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:09:07 by thera             #+#    #+#             */
/*   Updated: 2021/10/16 21:22:23 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	char			*ptr_ret;
	unsigned int	n;

	if (s == NULL)
		return (NULL);
	n = 0;
	ptr = (char *) malloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr_ret = ptr;
	while (*s)
	{
		*ptr++ = f(n++, *s++);
	}
	*ptr = '\0';
	return (ptr_ret);
}
