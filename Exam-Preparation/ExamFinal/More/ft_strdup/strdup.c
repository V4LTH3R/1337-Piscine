#include <stdlib.h>
#include <stdio.h>
char    *ft_strdup(char *src)
{
	int i = 0;
	char *cpy;
	while (src[i])
		i++;
	cpy = malloc(i + 1);
	if (!cpy)
		return NULL;
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return cpy;
}
int main(void)
{
	char src[] = "emm ig u have to use another empty str bach tchof wach storiti dakchi fih";
	char *cpy = ft_strdup(src);
	printf("%s\n", cpy);
}