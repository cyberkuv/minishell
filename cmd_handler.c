#include "minishell.h"

int     cmd_handler(char **parsed)
{
    int NoOfOwnCmds = 4, i, switchOwnArg = 0;
    char *ListOfOwnCmds[NoOfOwnCmds];
    char *user = getenv("USER");
    char *shell = getenv("SHELL");
    char *home = getenv("HOME");
    ListOfOwnCmds[0] = "exit"; 
    ListOfOwnCmds[1] = "cd"; 
    ListOfOwnCmds[2] = "echo"; 
    ListOfOwnCmds[3] = "env"; 
    for (i = 0; i < NoOfOwnCmds; i++) { 
        if (ft_strcmp(parsed[0], ListOfOwnCmds[i]) == 0) { 
            switchOwnArg = i + 1; 
            break;
        } 
    } 
    switch (switchOwnArg) { 
    case 1: 
        ft_printf("\n\x1B[31m___So Sad To See You Leave Us So Soon!___\x1B[0m\n");
        exit(0); 
    case 2: 
        chdir(parsed[1]); 
        return 1; 
    case 3:
        return 1;
    case 4:
        ft_printf("\x1B[34m@USER=%s\x1B[0m\n", user);
        ft_printf("\x1B[34m@SHELL=%s\x1B[0m\n", shell);
        ft_printf("\x1B[34m@HOME=%s\x1B[0m\n", home);
        return 1; 
    default:
        break; 
    } 
    return 0; 
}