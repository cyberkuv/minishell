/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 11:39:34 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/27 11:39:49 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int					main(void)
{
	unsigned int	k;
	int				nb;
    int				*ptr;
	char			xy;
	const char		*str1;
	char			*str2;

    xy = 'a';
	k = -1;
	nb = 789351;
	ptr = &nb;
	str1 = "What You Looking At?!";
	str2 = "Totally Looking At You!";
	
	printf("Actual Printf's Output :\n\n");
	printf("1. The character is: %c\n", xy);
	printf("2. The numbers are: %i and %d and %d\n", 2+2, 3, 4);
	printf("3. The string is: %s\n", str1);
	printf("4. Unsigned int %u, %U, %D\n", k, k, -k);
	printf("5. Unsigned string says: %s\n", str2);
	printf("6. %C\n", 55);
	printf("7. unSigned octal is: %O and  %o\n", (9 + 9 * -211), 610);
	printf("8. Unsigned hexadecimal interge small is: %x\n", nb);
	printf("9. Unsigned hexadecimal Capital is: %X\n", nb);
	printf("10. The address is: %p\n", &nb);
	printf("11. The address is: %p\n", ptr);
	printf("12. %%\n\n");

	ft_printf("Actual Printf's Output :\n\n");
	ft_printf("1. The character is: %c\n", xy);
	ft_printf("2. The numbers are: %i and %d and %d\n", 2+2, 3, 4);
	ft_printf("3. The string is: %s\n", str1);
	ft_printf("4. Unsigned int %u, %U, %D\n", k, k, -k);
	ft_printf("5. Unsigned string says: %s\n", str2);
	ft_printf("6. %C\n", 55);
	ft_printf("7. unSigned octal is: %O and  %o\n", (9 + 9 * -211), 610);
	ft_printf("8. Unsigned hexadecimal interge small is: %x\n", nb);
	ft_printf("9. Unsigned hexadecimal Capital is: %X\n", nb);
	ft_printf("10. The address is: %p\n", &nb);
	ft_printf("11. The address is: %p\n", ptr);
	ft_printf("12. %%\n\n");
}
