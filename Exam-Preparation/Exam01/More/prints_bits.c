#include <unistd.h>
void	print_bits(unsigned char octet)
{
    int nb = octet;
    char bits[8];
    int count = 0;
    while (count < 8)
    {
        bits[count] = nb % 2;
        nb /= 2;
        count;
    }
    while (count--)
    {
        write(1, &bits[count] + 48, 1);
    }   
}