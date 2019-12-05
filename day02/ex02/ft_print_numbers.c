void ft_putchar(char c);

void ft_print_numbers(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num ++;
	}
}

int main(void)
{
	ft_print_numbers();
	return 0;
}
