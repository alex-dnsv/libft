/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 23:53:44 by thera             #+#    #+#             */
/*   Updated: 2021/10/17 01:18:00 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_len(int n);
static void	ft_reverse(char *ptr, int len);
static void	ft_first_step(char *ptr, int n);

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	len = ft_len(n);
	if (n < 0)
		len += 1;
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	ft_first_step(ptr, n);
	ft_reverse(ptr, len - 1);
	return (ptr);
}

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_reverse(char *ptr, int len)
{
	int		i;
	char	temp;

	i = 0;
	while (i <= len / 2)
	{
		temp = ptr[i];
		ptr[i] = ptr[len - i];
		ptr[len - i] = temp;
		i++;
	}
}

static void	ft_first_step(char *ptr, int n)
{
	int			sign;
	int			i;
	long int	max_n;

	max_n = n;
	sign = 1;
	i = 0;
	if (max_n < 0)
	{
		sign = -1;
		max_n = -max_n;
	}
	ptr[i++] = max_n % 10 + '0';
	max_n /= 10;
	while (max_n > 0)
	{
		ptr[i++] = max_n % 10 + '0';
		max_n /= 10;
	}
	if (sign == -1)
		ptr[i++] = '-';
	ptr[i] = '\0';
}
