/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:44:30 by thera             #+#    #+#             */
/*   Updated: 2021/10/17 23:27:08 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int n);

int	ft_atoi(const char *nptr)
{
	int						sign;
	unsigned long long int	result;
	unsigned long long int	temp;

	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		temp = result;
		result = result * 10 + *nptr++ - '0';
		if (result / 10 != temp)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
	}
	return (sign * result);
}

static int	ft_isspace(int n)
{
	if (n == ' ' || n == '\t' || n == '\n')
		return (1);
	else if (n == '\v' || n == '\f' || n == '\r')
		return (1);
	return (0);
}
