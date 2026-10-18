#include <stdlib.h>
#include <stdio.h>
int is_seq(char c, char *seq)
{
    int i = 0;
    while (seq[i])
    {
        if (seq[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int count_words(char *str, char *seq)
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

char    **ft_split(char *str)
{
    char *seq = "\t \n";
    int words = count_words(str, seq);
    char **split = malloc(sizeof(char *) * (words + 1));
    if(!split)
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
            split[k] = malloc(sizeof(char) * (wordlen(str, seq, i) + 1));
            if (!split[k])
                return NULL;
            while (str[i] && !is_seq(str[i], seq))
                split[k][j++] = str[i++];
            split[k][j] = 0;
            k++;
        }
    }
    split[k] = NULL;
    return split;
}

int main(void)
{
    char str[] = "AMiNe Jouari Fdy Ether";
    char **split = ft_split(str);
    for (int i = 0; split[i]; i++) {
        printf("%s\n", split[i]);
    }
   for (int i = 0; split[i]; i++)
    free(split[i]);
free(split);
}
