#include "minishell.h"

int     process_string(char *str, char **parsed, char **parsed_pipe)
{
    char *strpiped[2];
    int piped = 0;
    piped = parse_pipe(str, strpiped);
    if(piped)
    {
        parse_space(strpiped[0], parsed);
        parse_space(strpiped[1], parsed_pipe);
    }
    else
    {
        parse_space(str, parsed);
    }

    if(cmd_handler(parsed))
        return 0;
    else
        return 1 + piped;
    
}