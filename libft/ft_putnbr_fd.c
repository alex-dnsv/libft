/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:09:41 by thera             #+#    #+#             */
/*   Updated: 2021/10/17 16:22:39 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n);
static int	ft_det(int n);

void	ft_putnbr_fd(int n, int fd)
{
	int			len;
	int			det;
	long int	max_n;

	max_n = n;
	if (max_n < 0)
	{
		ft_putchar_fd('-', fd);
		max_n = -max_n;
	}
	len = ft_len(n);
	det = ft_det(len);
	while (len-- > 0)
	{
		ft_putchar_fd(max_n / det + '0', fd);
		max_n %= det;
		det /= 10;
	}
}

static int	ft_det(int n)
{
	int	i;

	i = 1;
	while (n-- > 1)
		i *= 10;
	return (i);
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
