unsigned char	reverse_bits(unsigned char octet)
{
    octet ==  ((octet >> 4) | (octet << 4));
}