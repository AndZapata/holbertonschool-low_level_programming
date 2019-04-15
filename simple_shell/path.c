#include "shell.h"
/**
 * _path - Check for the path
 * @_args: Path arguments to check
 * @path_str: Structure to keep the PATH
 *
 * Return: Nothing
 */
void _path(char **_args, paths_t *path_str)
{
	char *ccat_slash = NULL;
	char *ccat_args = NULL;
	char *dup_path = NULL;
	char slash[] = "/";
	struct stat *buf;

	buf = malloc(sizeof(struct stat));
	if (buf == NULL)
		return;
	if (!path_str)
		return;
	while (path_str)
	{
		if (path_str->path)
		{

			dup_path = _strdup(path_str->path);
			_strcat(dup_path, slash);
			ccat_slash = _strdup(dup_path);
			_strcat(ccat_slash, _args[0]);
			ccat_args = _strdup(ccat_slash);
			if ((stat(ccat_args, buf)) == 0)
			{
				_args[0] = ccat_args;
				break;
			}
			path_str = path_str->next;
		}
	}

}
/**
 * _args_tokenized - Check for the path
 * @str: Path arguments to check
 * @_args: arguments obteined on stdin
 *
 * Return: Nothing
 */
void _args_tokenized(char *str, char **_args)
{
	const char delim[] = "=:;";
	char *keeper = NULL;
	int iter;

	keeper = strtok(str, delim);
	iter = 0;
	while (keeper)
	{
		_args[iter] = keeper;
		keeper = strtok(NULL, delim);
		iter++;
	}
	_args[iter] = NULL;
	free(keeper);
}
/**
 * _struct - Create an structure to keep the path
 * @head: Head of the linked list
 * @str: string received
 *
 * Return: a new node for the linked list
 */
paths_t *_struct(paths_t **head, char *str)
{
	paths_t *newnod = (paths_t *)malloc(sizeof(paths_t));

	if (!newnod)
		return (NULL);
	newnod->path = _strdup(str);
	if (!newnod->path)
	{
		free(newnod);
		return (NULL);
	}
	newnod->next = *head;
	*head = newnod;

	return (newnod);
}
/**
 * keeped_path - Check for the path keeped
 * @env: environment
 *
 * Return: Head
 */
paths_t *keeped_path(char **env)
{
	int i, j = 0, find_p, counter;
	char **dup_env, **strc = NULL;
	char *dup, *comp = "PATH";
	paths_t *head;

	dup_env = env;
	for (i = 0; dup_env[i] != NULL; i++)
	{
		counter = 0;
		for (j = 0; dup_env[i][j]; j++)
		{
			if (dup_env[i][j] == comp[j] && j < 4)
			{
				counter++;
				if (counter == 4 && j == 3)
					find_p = i;
			}
			else
				counter = 0;
		}
	}
	dup = dup_env[find_p];
	strc = malloc(sizeof(char *) * 1024);
	_args_tokenized(dup, strc);
	head = NULL;

	for (i = 0; strc[i]; i++)
		_struct(&head, strc[i]);
	i = 0;

	free(strc);
	return (head);
}
