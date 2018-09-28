/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:19:58 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/25 15:09:22 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	e;

	e = 0;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == 0)
		return (NULL);
	while (e <= size)
	{
		str[e] = 0;
		e++;
	}
	return (str);
	free(str);
	return (0);
}
