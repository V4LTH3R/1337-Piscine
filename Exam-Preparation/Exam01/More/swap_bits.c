// void    swap_str(char *str)
// {
//     int len = 0;
//     int  i = 0;
//     while (str[len])
//         len++;
//     while (i < len)
//     {
//         char temp = str[i];
//         str[i] = str[len];
//         str[len] = temp;
//         i++;
//         len--;
//     }
// }

// void    swap_binary(char *bits)
// {
//     int i = 0;
//     int half = 4;
//     while (i < half)
//     {
//         char c = bits[half];
//         bits[half] = bits[i];
//         bits[i] = c;
//         i++;
//         half++;
//     }
// }

// unsigned char	swap_bits(unsigned char octet)
// {
//     int count = 0;
//     char bits[8];
//     int nb = octet - 48;
//     char c;
//     while (count < 8)
//     {
//         bits[count] = nb % 2;
//         nb /= 2;
//         count++;
//     }
//     swapstr(bits);
//     swap_binary(bits);
// }
// int main()
// {
//     swap_binary(5);
// }
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}