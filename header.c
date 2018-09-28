/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:19:05 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/25 10:24:56 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void		mini_head(void)
{
	ft_putstr("\x1B[31m __       __  __            __ \x1B[0m");
	ft_putendl("\x1B[31m           __                  __  __\x1B[0m");
	ft_putstr("\x1B[31m/  \\     /  |/  |          / \x1B[0m");
	ft_putendl("\x1B[31m |          /  |                /  |/  |\x1B[0m");
	ft_putstr("\x1B[31m$$  \\   /$$ |$$/  _______  $$\x1B[0m");
	ft_putendl("\x1B[31m/   _______ $$ |____    ______  $$ |$$ |\x1B[0m");
	ft_putstr("\x1B[31m$$$  \\ /$$$ |/  |/       \\ /\x1B[0m");
	ft_putendl("\x1B[31m  | /       |$$      \\  /      \\ $$ |$$ |\x1B[0m");
	ft_putstr("\x1B[31m$$$$  /$$$$ |$$ |$$$$$$$  |$$ \x1B[0m");
	ft_putendl("\x1B[31m|/$$$$$$$/ $$$$$$$  |/$$$$$$  |$$ |$$ |\x1B[0m");
	ft_putstr("\x1B[31m$$ $$ $$/$$ |$$ |$$ |  $$ |$$ \x1B[0m");
	ft_putendl("\x1B[34m|$$      \\ $$ |  $$ |$$    $$ |$$ |$$ |\x1B[0m");
	ft_putstr("\x1B[34m$$ |$$$/ $$ |$$ |$$ |  $$ |$$ \x1B[0m");
	ft_putendl("\x1B[34m| $$$$$$  |$$ |  $$ |$$$$$$$$/ $$ |$$ |\x1B[0m");
	ft_putstr("\x1B[34m$$ | $/  $$ |$$ |$$ |  $$ |$$ \x1B[0m");
	ft_putendl("\x1B[34m|/     $$/ $$ |  $$ |$$       |$$ |$$ |\x1B[0m");
	ft_putstr("\x1B[34m$$/      $$/ $$/ $$/   $$/ $$/\x1B[0m");
	ft_putendl("\x1B[34m $$$$$$$/  $$/   $$/  $$$$$$$/ $$/ $$/$\x1B[0m");
}

void		cmd_head(void)
{
	ft_putstr("\x1B[31m$-----------------------------------------");
	ft_putendl("--------------------------$\x1B[0m");
	ft_putstr("\x1B[31m$                      AVAILABLE ");
	ft_putendl("COMMAND OPTIONS                    $\x1B[0m");
	ft_putstr("\x1B[31m$-----------------------------------------");
	ft_putendl("--------------------------$\x1B[31m");
	ft_putstr("\x1B[34m");
	ft_putstr("$                      [..echo...]                     ");
	ft_putendl("             $");
	ft_putstr("$                      [..cd...]                       ");
	ft_putendl("             $");
	ft_putstr("$                      [..setenv...]                   ");
	ft_putendl("             $");
	ft_putstr("$                      [..unsetenv...]                 ");
	ft_putendl("             $");
	ft_putstr("$                      [..env...]                      ");
	ft_putendl("             $");
	ft_putstr("$                      [..exit...]                     ");
	ft_putendl("             $");
	ft_putstr("\x1B[0m");
	ft_putstr("\x1B[31m$-----------------------------------------");
	ft_putendl("--------------------------$\x1B[0m");
	ft_putstr("\x1B[34m							by Emmanuel**\x1B[0m\n\n");
}
