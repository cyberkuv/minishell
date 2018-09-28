/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   built_ins.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 08:53:23 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/25 10:25:45 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		mini_cd(char **args)
{
	if (args[1] == NULL)
		fprintf(stderr, "minishell: expected argument to \"cd\"\n");
	else
	{
		if (chdir(args[1]) != 0)
			ft_putstr("no such file or directory.");
	}
	return (1);
}

char	*builtin_str[] = {
	"mini_cd",
	"mini_help",
	"mini_exit"
};

int		builtin_num()
{
	return (sizeof(builtin_str) / sizeof(char *));
}

int		mini_help(char **args)
{
	int x;

	x = 0;
	(void)args;
	ft_putendl("Emmanuel's Minishell");
	ft_putendl("type program names and arguments and hit enter");
	ft_putendl("The following are builtins");
	while (x++ < builtin_num())
		ft_printf("   %s\n", builtin_str[x]);
	ft_putstr("Use the 'man' page for info on other programs.\n");
	return (1);
}

int		mini_exit(char **args)
{
	(void)args;
	return (0);
}
