#include "minishell.h"

void    exec_args(char **parsed)
{
    pid_t pid = fork();
    if(pid == -1)
    {
        ft_printf("\n\x1B[31m___Forking Failed!___\x1B[0m");
        return ;
    }
    else if(pid == 0)
    {
        if(execvp(parsed[0], parsed) < 0)
        {
            ft_printf("\x1B[31m___Not One Of My Commands!___\x1B[0m\n");
        }
        exit(0);
    }
    else
    {
        wait(NULL);
        return ;
    }
    
}

void    exec_args_piped(char** parsed, char** parsedpipe)
{ 
    int pipefd[2];
    pid_t p1, p2;
    if (pipe(pipefd) < 0) {
        ft_printf("\x1B[31m___Pipe Could Not Be Initialized!___\x1B[0m\n");
        return; 
    } 
    p1 = fork(); 
    if (p1 < 0) { 
        ft_printf("\x1B[31m___Could Not Fork!___\x1B[0m\n");
        return; 
    } 
    if (p1 == 0) {
        close(pipefd[0]); 
        dup2(pipefd[1], STDOUT_FILENO); 
        close(pipefd[1]); 
        if (execvp(parsed[0], parsed) < 0) { 
            ft_printf("\x1B[31m___Could Not Execute Command 1!___\x1B[0m\n");
            exit(0); 
        } 
    } else { 
        p2 = fork(); 
        if (p2 < 0) {
            ft_printf("\x1B[31m___Could Not Fork!___\x1B[0m\n");
            return; 
        } 
        if (p2 == 0) { 
            close(pipefd[1]); 
            dup2(pipefd[0], STDIN_FILENO); 
            close(pipefd[0]); 
            if (execvp(parsedpipe[0], parsedpipe) < 0) { 
                ft_printf("\x1B[31m___Could Not Execute Command 1!___\x1B[0m\n");
                exit(0); 
            } 
        } else { 
            wait(NULL); 
            wait(NULL); 
        } 
    } 
} 