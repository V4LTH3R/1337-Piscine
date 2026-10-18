#include <stdlib.h>
char *strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[i])
        {
            if (s1[i] == s2[i])
                return s1[i];
            j++;
        }
        i++;
    }
    return NULL;
}