
int	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
int main(void)
{
	ft_print_alphabet();
	return 0;
}


