#include <stdio.h>
char	*ft_uppercase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}
char	*DoubleZG(char *str)
{
	ft_uppercase(str);
	int i = 0 ;
    while (str[i])
    {
		if ((!(i % 2 == 0))) 
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return str;
}

int main()
{
	char str[] = "Ablati 3la T*** M***";
	printf("%s", DoubleZG(str));
}