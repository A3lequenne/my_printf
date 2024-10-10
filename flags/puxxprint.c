#include "../includes/ft_printf.h"

void	uprint(unsigned int i, t_struct *s)
{
	char	*base;

	base = "0123456789";
	if (i >= 10)
	{
		uprint(i / 10, s);
		uprint(i % 10, s);
	}
	else
	{
		ft_putchar(base[i]);
		s->len++;
	}
}

void	smallxprint(unsigned int i, t_struct *s)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		smallxprint(i / 16, s);
		smallxprint(i % 16, s);
	}
	else
	{
		ft_putchar(base[i]);
		s->len++;
	}
}

void	bigxprint(unsigned int i, t_struct *s)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		bigxprint(i / 16, s);
		bigxprint(i % 16, s);
	}
	else
	{
		ft_putchar(base[i]);
		s->len++;
	}
}

void	ptrprint(unsigned long int i, t_struct *s)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ptrprint(i / 16, s);
		ptrprint(i % 16, s);
	}
	else
	{
		ft_putchar(base[i]);
		s->len++;
	}
}