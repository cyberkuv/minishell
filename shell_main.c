/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 13:54:13 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/26 14:18:16 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <readline/readline.h>
#include "minishell.h"

int		main(int ac, char **av, char **env)
{
	char		**cmd;
	char		*input;
	const char	*line;
	(void)ac;
	(void)env;
	(void)av;

	line = (const char *)malloc(sizeof(char) * 9);
	line = "\x1B[34m$$>>l ";
	mini_head();
	cmd_head();
	while (1)
	{
		//ft_print(li
		//input = get_next_line(0, &input);
		input = readline(line);
	}
	free(input);
	free(cmd);
	free(&line);
	return (0);
}
