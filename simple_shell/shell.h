#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <limits.h>

/**
 * struct path_s - Structure to move on path
 * @path: Directories obtained on path
 * @next: next node
 * Return: Nothing
 */

typedef struct path_s
{
	char *path;
	struct path_s *next;

} paths_t;

char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strlen(char *s);
int _atoi(char *str);
paths_t *keeped_path(char **env);
paths_t *_struct(paths_t **head, char *str);
void free_list(paths_t *hd);
void free_parsed(char **_args);
void _args_tokenized(char *str, char **_args);
void _path(char **_args, paths_t *path_str);
void parse_text(char *str, char **_args);
void _sigint(int do_not);
void ex_arg(char **av, char **_args, char **env, paths_t *path_str);
void _prompt(char **av, char *env[]);
void exit_func(char *buf, char **_args, paths_t *path_str);

#endif /* JUANITO_SHELL */
