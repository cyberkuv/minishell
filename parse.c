#include "minishell.h"

int     parse_pipe(char *str, char **strpiped)
{
    int i; 
    for (i = 0; i < 2; i++) { 
        strpiped[i] = strsep(&str, "|"); 
        if (strpiped[i] == NULL) 
            break; 
    }
    if (strpiped[1] == NULL) 
        return 0;
    else { 
        return 1; 
    }
}

void    parse_space(char *str, char **parsed)
{ 
    int i;
    for (i = 0; i < MAXLIST; i++) {
        parsed[i] = strsep(&str, " ");
        if (parsed[i] == NULL)
            break;
        if (ft_strlen(parsed[i]) == 0)
            i--;
    }
}