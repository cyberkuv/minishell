#include "minishell.h"

int     main()
{
    char inputString[MAXCOM], *parsedArgs[MAXLIST];
    char *parsedArgsPiped[MAXLIST];
    int exec_flag = 0;
    mini_head();
    cmd_head();
    init_shell();

    while (1)
    {
        get_dir();
        if(take_input(inputString))
            continue;
        exec_flag = process_string(inputString, parsedArgs, parsedArgsPiped);
        if(exec_flag == 1)
            exec_args(parsedArgs);
        if(exec_flag == 2)
            exec_args_piped(parsedArgs, parsedArgsPiped);
    }
    return 0;
}