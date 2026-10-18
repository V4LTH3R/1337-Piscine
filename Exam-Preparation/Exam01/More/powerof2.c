int	    is_power_of_2(unsigned int n)
{
    if (n % 2 == 0)
        n /= 2;
    if (n == 1)
        return 1;
    return 0;
}