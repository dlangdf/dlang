void ft_putchar(char c);

void ft_print_comb(void)
{
	char a,b,c;

	a = '0' - 1;
	while (a++ <= '7')
	{
		b = a;
		while (b++ <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				  ft_putchar(a);
                                  ft_putchar(b);
                                  ft_putchar(c);

				if (a != '7' || b != '8' || c != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
		}
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}
				
