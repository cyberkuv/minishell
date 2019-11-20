#include "minishell.h"

int     cmd_handler(char **parsed)
{
    int NoOfOwnCmds = 4, i, switchOwnArg = 0;
    char* ListOfOwnCmds[NoOfOwnCmds];
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
        return 1; 
    default:
        break; 
    } 
    return 0; 
}