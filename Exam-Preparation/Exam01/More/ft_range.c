#include <stdlib.h>
int     *ft_range(int start, int end)
{
    int diff = end - start + 1;
    int i = 0;
    int *arr = malloc(sizeof(int) * diff);
    if (!arr)
        return NULL;
    while (i <= diff)
    {
        arr[i] = start + i;
        i++;
    }
    return arr;
}
int main()
{
    char *arr = ft_range(1, 3);
}