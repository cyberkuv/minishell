/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:42:16 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/25 13:11:31 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_format(t_print *fmt)
{
	if (fmt->precision != NULL)
	{
		if (fmt->precision[0] >= '0' && fmt->precision[0] <= 9)
			free(fmt->precision);
	}
	if (fmt->width != NULL)
	{
		if (fmt->width[0] >= '0' && fmt->width[0] <= '9')
			free(fmt->width);
	}
	free(fmt);
}

t_print		*format_init(void)
{
	t_print *fmt;

	fmt = (t_print *)malloc(sizeof(t_print));
	fmt->flgs = '\0';
	fmt->sign = '\0';
	fmt->pre = '\0';
	fmt->width = NULL;
	fmt->precision = NULL;
	fmt->mod = NULL;
	fmt->type = '\0';
	free_format(fmt);
	return (fmt);
	free(fmt);
	return (0);
}
