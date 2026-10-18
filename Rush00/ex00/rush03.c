void	ft_putchar(char c);

void	printthings(int x, int y, int line, int chars)
{
	while (line < y)
	{
		chars = 0;
		while (chars < x)
		{
			if ((chars == 0 && line == 0) || (chars == 0 && line == y - 1))
				ft_putchar('A');
			else if ((chars == x - 1 && line == 0)
				|| (chars == x - 1 && line == y - 1))
				ft_putchar('C');
			else if (chars == 0 || line == 0 || chars == x - 1 || line == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			chars++;
		}
		ft_putchar('\n');
		line++;
	}
}

void	rush(int x, int y)
{
	int	line;
	int	chars;

	line = 0;
	chars = 0;
	printthings(x, y, line, chars);
}
