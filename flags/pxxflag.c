#include "../includes/ft_printf.h"

void	pflag(t_struct *s)
{
	unsigned long	res;

	res = va_arg(s->args, unsigned long);
	ft_putstr("0x");
	s->len += 2;
	ptrprint(res, s);
}

void	xflag(t_struct *s)
{
	int	res;

	res = va_arg(s->args, unsigned long);
	smallxprint(res, s);
}

void	bigxflag(t_struct *s)
{
	int	res;

	res = va_arg(s->args, unsigned int);
	bigxprint(res, s);
}