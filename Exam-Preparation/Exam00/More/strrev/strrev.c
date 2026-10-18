#include <unistd.h>
#include <stdio.h>

int ftstrlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char    *ft_strrev(char *str)
{
    int len = ftstrlen(str) - 1;
    int i = 0;
    while (i < len)
    {
        char temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    str[i + len + 1] = '\0';
    return str;
}

int main()
{
    char name[] = "ether v0.0";
    printf("%s\n", ft_strrev(name));
}