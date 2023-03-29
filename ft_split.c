/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:29:37 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/03/29 02:33:00 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_substrcount(const char *str, char c)
{
	int	i;
	int	count;
	int	flag;

	flag = -1;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && flag == -1)
		{
			flag = 1;
			count++;
		}
		else if (str[i] == c)
			flag = -1;
		i++;
	}
	return (count);
}

static char	*ft_nextsubstr(char const **str, char c)
{
	unsigned int	len;
	char			*dststr;

	len = 0;
	while (**str && **str == c)
		(*str)++;
	while ((*str)[len] && (*str)[len] != c)
		len++;
	dststr = ft_substr(*str, 0, len);
	if (!dststr)
		return (NULL);
	*str += len;
	return (dststr);
}

static void	ft_free(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**substr;
	int		i;
	int		len;

	i = 0;
	len = ft_substrcount(s, c);
	substr = (char **)ft_calloc((len + 1), sizeof(char *));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = ft_nextsubstr(&s, c);
		if (!substr[i])
		{
			ft_free(substr, i);
			return (NULL);
		}
		i++;
	}
	return (substr);
}

/*
static int	ft_substrcount(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			i++;
			continue;		
		}
		while (str[i] != '\0')
		{
			if (str[i] == c || str[i+1] == '\0')
			{
				count++;
				break;
			}
			i++;
		}
		i++;
	}
	return (count);
}
*/