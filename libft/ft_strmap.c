/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:10:16 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/25 15:07:01 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		e;
	int		m;

	if (s && f)
	{
		e = 0;
		m = ft_strlen(s);
		str = (char *)malloc(sizeof(char) * m + 1);
		if (str == 0)
			return (NULL);
		while (s[e] != 0)
		{
			str[e] = f(s[e]);
			e++;
		}
		str[e] = '\0';
		return (str);
		free(str);
	}
	return (NULL);
}
