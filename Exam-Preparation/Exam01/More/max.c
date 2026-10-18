int		max(int* tab, unsigned int len)
{
    int i = 0;
    int big = tab[i];
    while (i < len)
    {
        if (big < tab[i+1])
        {
            big = tab[i+1]; 
        }
        i++;
    }
    return big;
}
// 5 13 5 78 1