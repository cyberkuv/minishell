/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <eonwe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:59:38 by eonwe             #+#    #+#             */
/*   Updated: 2018/09/26 14:07:19 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdlib.h>
# include <unistd.h>
# include <dirent.h>
# include <sys/stat.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdio.h>
# include <readline/readline.h>
# include "./libft/libft.h"

void					mini_head(void);
void					cmd_head(void);
int						main(int ac, char **av, char **env);
int						mini_cd(char **args);
int						mini_exit(char **args);
int						mini_help(char **args);

#endif
