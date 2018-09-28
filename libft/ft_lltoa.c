/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 09:49:21 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/25 14:33:29 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	long	ft_value(char **str, long long n)
{
	long long	nbr;
	long long	val;
	int			i;

	nbr = n;
	val = 1;
	i = 1;
	while (nbr > 9 || nbr < -9)
	{
		nbr = nbr / 10;
		i++;
		val = val * 10;
	}
	if (n < 0)
		i++;
	*str = (char*)malloc(sizeof(char) * (i + 1));
	return (val);
}

char static			*ft_fill(char *str, long long nbr, long long d, int *i)
{
	long long s;

	s = 0;
	while (d > 9)
	{
		s = s + (str[*i] - '0') * d;
		d = d / 10;
		(*i)++;
		str[*i] = (nbr - s) / d + '0';
	}
	return (str);
}

char				*ft_lltoa(long long n)
{
	long long	val;
	long long	nbr;
	char		*str;
	int			i;

	i = 0;
	str = NULL;
	nbr = (long long)n;
	val = ft_value(&str, nbr);
	if (str == NULL)
		return (NULL);
	if (nbr < 0)
	{
		str[i] = '-';
		i++;
		nbr = nbr * (-1);
	}
	if (nbr >= 0)
		str[i] = '0' + (nbr / val);
	else
		str[i] = '0' - (nbr / val);
	str = ft_fill(str, nbr, val, &i);
	str[i + 1] = '\0';
	return (str);
}
