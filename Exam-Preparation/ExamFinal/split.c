#include <stdlib.h>

int is_seq(char c, char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int countwords(char *str, char *seq)
{
    int i = 0;
    int count = 0;
    int in_word = 0;
    while (str[i])
    {
        if (!is_seq(str[i], seq) && in_word == 0)
        {
            count++;
            in_word = 1;
        }
        else if (is_seq(str[i], seq))
            in_word = 0;
        i++;
    }
    return count;
}

int wordlen(char *str, char *seq, int start)
{
    int i = start;
    while (str[i] && !is_seq(str[i], seq))
        i++;
    return i - start;
}

char    **ft_split(char *str, char *seq)
{
    int words = countwords(str, seq);
    char **arr = malloc(sizeof(char *) * (words + 1));
    if(!arr)
        return NULL;
    int i = 0;
    int k = 0;
    int j = 0;
    while (str[i])
    {
        j = 0;
        if (is_seq(str[i], seq))
            i++;
        else
        {
            arr[k] = malloc(sizeof(char) * (wordlen(str, seq, i) + 1));
            if(!arr[k])
                return NULL;
            while(str[i] && !is_seq(str[i], seq))
                arr[k][j++] = str[i++];
            arr[k][j] = 0;
            k++;
        }
    }
    arr[k] = NULL;
    return arr;
}