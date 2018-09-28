/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:34:46 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/25 13:48:14 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *store;

	store = malloc(size);
	if (store == 0)
		return (NULL);
	ft_memset(store, 0, size);
	return (store);
	free(store);
	return (0);
}
