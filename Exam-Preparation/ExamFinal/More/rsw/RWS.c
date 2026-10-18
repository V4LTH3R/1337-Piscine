#include <unistd.h>

void printWord(char *str, int start, int end)
{
    while (start <= end)
    {
        write(1, &str[start], 1);
        start++;
    }
}

int firstChar(char *str)
{
    int i = 0;
    while (str[i])
    {
    if (str[i] >= 'a' && str[i] <= 'z') 
        return i;
    i++;
    }
}

void RWS(char *str)
{  
    int i = 0;
    while(str[i])
        i++;
    i--;
    int end = i;
    while (i > 0)
    {
        while ((str[i] >= 9 && str[i] <= 13 || str[i] == ' ') || (str[i] == ','))
            i--;
        end = i;
        while (i != 0 && ((str[i] >= 'a' && str[i] <= 'z') 
                        || (str[i] >= 'A' && str[i] <= 'Z')))
            i--;
        if (i == 0)
            printWord(str, i, end);
        else
            printWord(str, i+1, end);
        if(i > firstChar(str))
            write(1, "-", 1);
    }
}

int main()
{
    RWS("fix one bug, chase the next");
}