/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:50:10 by thera             #+#    #+#             */
/*   Updated: 2021/10/17 02:01:47 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (ft_strncmp(little, "", 1) == 0)
		return ((char *) big);
	if (little == NULL)
		return (NULL);
	while (*big && len >= ft_strlen(little))
	{
		if (*big == *little)
			if (ft_strncmp(big, little, ft_strlen(little)) == 0)
				return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}
