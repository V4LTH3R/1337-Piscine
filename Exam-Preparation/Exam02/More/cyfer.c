// void ft_lowcase(char *s1, char *s2)
// {
//     int i = 0;
//     int j = 0;
//         while (s1[i])
//         {
//             j = 0;
//             while (s2[j] && s1[i])
//             {
//                 if(ft_str_is_lowercase(s1) && ft_str_is_lowercase(s2))
//                 {
//                     s1[i] += s2[j] - 'a';
//                     if((unsigned char)s1[i] > 'z')
//                         s1[i] = 'a' + (s1[i] - 'z');
//                 }
//                 else if (!ft_str_is_lowercase(s1) && !ft_str_is_lowercase(s2))
//                 {
//                     s1[i] += s2[j] - 'A';
//                     if((unsigned char)s1[i] > 'Z')
//                         s1[i] = 'A' + (s1[i] - 'Z');
//                 }
//                 else if (!ft_str_is_lowercase(s1) && ft_str_is_lowercase(s2))
//                 {
//                     s1[i] += (s2[j] - 32) - 'A';
//                     if((unsigned char)s1[i] > 'Z')
//                         s1[i] = 'A' + (s1[i] - 'Z');                    
//                 }
//                 else if (ft_str_is_lowercase(s1) && !ft_str_is_lowercase(s2))
//                 {
//                     s1[i] += (s2[j] + 32) - 'a';
//                     if((unsigned char)s1[i] > 'z')
//                         s1[i] = 'a' + (s1[i] - 'z');                    
//                 }
//                 i++;
//                 j++;
//             }
//         }
// }

#include <unistd.h>

int is_alpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' <= 'Z'));
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        char c;
        int shift = 0;;
        while (av[1][i])
        {
            c = av[1][i];
            if(is_alpha(av[2][j]))
            {
                if (av[2][j] >= 'a' && av[2][j] <= 'z')
                    shift = av[2][j] - 'a';
                else
                    shift = av[2][j] - 'A';
                if(c >= 'a' && c <= 'z')
                    c = ((av[1][i] - 'a' + shift) % 26) + 'a';
                else if (c >= 'A' && c <= 'Z')
                    c = ((av[1][i] - 'A' + shift) % 26) + 'A';
                j++;
                if(!av[2][j])
                    j = 0;
            }
            write(1, &c, 1);
            i++;            
        }
    }
    write(1, "\n", 1);f
}