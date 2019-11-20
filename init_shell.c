#include "minishell.h"

void    init_shell()
{
    char *username = getenv("USER");
    ft_printf("\x1B[34m@user:%s\x1B[0m\n", username);
    sleep(1);
}

int     take_input(char *str)
{
    char *buff;
    buff = readline("\x1B[34m \x1B[0m");
    if(ft_strlen(buff) != 0)
    {
        add_history(buff);
        ft_strcpy(str, buff);
        return 0;
    }
    else
    {
        return 1;
    }
}

void    get_dir()
{
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    ft_printf("\x1B[34m$>> %s\x1B[0m", cwd);
}