/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 11:04:46 by eonwe             #+#    #+#             */
/*   Updated: 2018/08/25 11:01:17 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr(char *str, int len)
{
	int x;

	x = 0;
	while (x < len && str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}
