#include "../includes/ft_printf.h"

void	diflag(t_struct *s)
{
	int	res;

	res = va_arg(s->args, long int);
	if (res < 0)
	{
		res = -res;
		s->len ++;
		ft_putchar('-');
	}
	ft_putnbr(res);
	if (res == 0)
		s->len++;
	while (res != 0)
	{
		res = res / 10;
		s->len ++;
	}
}

void	uflag(t_struct *s)
{
	int	res;

	res = va_arg(s->args, int);
	uprint(res, s);
}

void	percflag(t_struct *s)
{
	ft_putchar('%');
	s->len++;
}