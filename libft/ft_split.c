/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 10:57:21 by thera             #+#    #+#             */
/*   Updated: 2022/01/14 17:29:47 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		in_word;

	i = 0;
	j = 0;
	in_word = 0;
	while (s[j])
	{
		if (s[j] != c && in_word == 0)
		{
			i++;
			in_word = 1;
		}
		else if (s[j] == c)
			in_word = 0;
		j++;
	}
	return (i);
}

static char	*ft_splitword(size_t *k, char ch, const char *s)
{
	size_t	i;
	size_t	j;
	char	*word;

	i = 0;
	j = 0;
	while (s[*k] && s[*k] == ch)
		(*k)++;
	while (s[*k] && s[*k] != ch)
	{
		(*k)++;
		i++;
	}
	if (i == 0)
		return (NULL);
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	while (j < i)
	{
		word[j] = s[*k - i + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	i = ft_wordcount(s, c);
	j = 0;
	k = 0;
	ptr = (char **)malloc(sizeof(char *) * (i + 1));
	if (!ptr)
		return (NULL);
	while (j < i)
	{
		ptr[j] = ft_splitword(&k, c, s);
		j++;
	}
	ptr[j] = NULL;
	return (ptr);
}
