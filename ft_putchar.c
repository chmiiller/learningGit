#include <unistd.h>
// void ft_putchar(char c);
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('c');
	return (0);
}


// #include <stdio.h>
// #include <unistd.h>
