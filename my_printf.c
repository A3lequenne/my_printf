#include "includes/my_printf.h"

t_struct	*initialise_struct(t_struct *s)
{
	s->len = 0;
	return (s);
}

void	conv_tab(char c, t_struct *s)
{
	if (c == 'c')
		cflag(s);
	else if (c == 's')
		sflag(s);
	else if (c == 'p')
		pflag(s);
	else if (c == 'd' || c == 'i')
		diflag(s);
	else if (c == 'u')
		uflag(s);
	else if (c == 'X')
		bigxflag(s);
	else if (c == 'x')
		xflag(s);
	else if (c == '%')
		percflag(s);
}

int	my_printf(const char *input, ...)
{
	t_struct	*s;
	int		    i;

	s = malloc(sizeof(t_struct));
	if (!s)
		return (-1);
	s = initialise_struct(s);
	i = 0;
	va_start(s->args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", input[i + 1]))
				conv_tab(input[i++ + 1], s);
		}
		else
		{
			ft_putchar(input[i]);
			s->len++;
		}
		i++;
	}
	free(s);
	return (s->len);
}

void test_my_printf() {
    printf("res_mine: %d\n", my_printf("Mine: Character: %c\n", 'A'));
    printf("res_real: %d\n\n", printf("Real: Character: %c\n", 'A'));

    printf("res_mine: %d\n", my_printf("Mine: String: %s\n", "Hello, World!"));
    printf("res_real: %d\n\n", printf("Real: String: %s\n", "Hello, World!"));

    int a = 42;
    printf("res_mine: %d\n", my_printf("Mine: Pointer: %p\n", (void*)&a));
    printf("res_real: %d\n\n", printf("Real: Pointer: %p\n", (void*)&a));

    printf("res_mine: %d\n", my_printf("Mine: Decimal (signed): %d\n", 123));
    printf("res_real: %d\n\n", printf("Real: Decimal (signed): %d\n", 123));

    printf("res_mine: %d\n", my_printf("Mine: Integer: %i\n", -456));
    printf("res_real: %d\n\n", printf("Real: Integer: %i\n", -456));

    printf("res_mine: %d\n", my_printf("Mine: Unsigned: %u\n", 12345));
    printf("res_real: %d\n\n", printf("Real: Unsigned: %u\n", 12345));

    printf("res_mine: %d\n", my_printf("Mine: Hexadecimal (uppercase): %X\n", 48879));
    printf("res_real: %d\n\n", printf("Real: Hexadecimal (uppercase): %X\n", 48879));

    printf("res_mine: %d\n", my_printf("Mine: Hexadecimal (lowercase): %x\n", 48879));
    printf("res_real: %d\n\n", printf("Real: Hexadecimal (lowercase): %x\n", 48879));

    printf("res_mine: %d\n", my_printf("Mine: Percentage: %%\n"));
    printf("res_real: %d\n", printf("Real: Percentage: %%\n"));
}

int main()
{
	test_my_printf();
}