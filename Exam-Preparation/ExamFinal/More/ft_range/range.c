#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int *arr;
	int i = (end - start);
	arr = malloc((sizeof(int) * i + 1));
	int j = 0;
	while (j <= i)
	{
		arr[j] = start;
		j++;
		start++;
	}
	return arr;
}
int main()
{
	int start = -3;
	int end = -1;
	int *arr = malloc(sizeof(int) * (end - start) + 1);
	arr = ft_range(start, end);
	for (int i = 0; i <= end - start; i++)
	{
		printf("%i ", arr[i]);
	}
}