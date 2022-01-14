/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:25:26 by thera             #+#    #+#             */
/*   Updated: 2021/10/19 14:07:11 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start_srch(char const *s1, char const *set);
static int	ft_stop_srch(char const *s1, char const *set);
static int	ft_malloc_size(int start, int stop);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*ptr_ret;
	int		start;
	int		stop;
	int		i;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	start = ft_start_srch(s1, set);
	stop = ft_stop_srch(s1, set);
	ptr = (char *) malloc(sizeof(char) * (ft_malloc_size(start, stop)));
	ptr_ret = ptr;
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		if (i >= start && i <= stop)
			*ptr++ = s1[i];
		i++;
	}
	*ptr = '\0';
	return (ptr_ret);
}

static int	ft_start_srch(char const *s1, char const *set)
{
	int		i;
	int		in_set;
	char	*ptr;

	i = 0;
	in_set = 1;
	ptr = (char *) s1;
	while (*ptr)
	{
		if (ft_strchr(set, *ptr) != NULL && in_set == 1)
			i++;
		else
			in_set = 0;
		ptr++;
	}
	return (i);
}

static int	ft_stop_srch(char const *s1, char const *set)
{
	int		i;
	int		in_set;
	int		len;
	char	*ptr;

	i = 0;
	in_set = 1;
	len = ft_strlen(s1);
	ptr = (char *) s1;
	while (*ptr++)
		i++;
	ptr--;
	ptr--;
	while (len-- > 0)
	{
		if (ft_strchr(set, *ptr) != NULL && in_set == 1)
			i--;
		else
			in_set = 0;
		ptr--;
	}
	return (i - 1);
}

static int	ft_malloc_size(int start, int stop)
{
	int	i;

	if (start > stop)
		i = 1;
	else
		i = stop - start + 2;
	return (i);
}
