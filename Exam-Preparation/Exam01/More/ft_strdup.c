#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
} 
char    *ft_strdup(char *src)
{
    char *dup = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
    if (!dup)
        return NULL;
    int i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    
    return (dup);
}