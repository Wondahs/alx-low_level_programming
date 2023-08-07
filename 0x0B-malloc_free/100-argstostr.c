#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all program arguments into a string.
 * @ac: Number of arguments.
 * @av: Array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	int ai, ci, tc = 0, si = 0;
	char *cs;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ai = 0; ai < ac; ai++)
	{
		for (ci = 0; av[ai][ci]; ci++)
			tc++;
	}
	tc += ac;

	cs = malloc(sizeof(char) * (tc + 1));
	if (cs == NULL)
		return (NULL);

	for (ai = 0; ai < ac; ai++)
	{
		for (ci = 0; av[ai][ci]; ci++)
		{
			cs[si] = av[ai][ci];
			si++;
		}
		if (cs[si] == '\0')
		{
			cs[si++] = '\n';
		}
	}

	return (cs);
}
