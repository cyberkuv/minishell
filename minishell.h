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

# define MAXCOM 1000
# define MAXLIST 100
# define clear() ft_printf("\033[H\033[J")

# include <stdlib.h>
# include <unistd.h>
# include <dirent.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "./libft/libft.h"

void					mini_head(void);
void					cmd_head(void);
void                    init_shell();
void                    get_dir();
int                     take_input(char *str);
void                    exec_args(char **parsed);
void                    exec_args_piped(char** parsed, char** parsedpipe);
int                     cmd_handler(char **parsed);
int                     parse_pipe(char *str, char **strpiped);
void                    parse_space(char *str, char **parsed);
int                     process_string(char *str, char **parsed, char **parsed_pipe);
int						main();

#endif
