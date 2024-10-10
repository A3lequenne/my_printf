#include "../includes/my_printf.h"

void	cflag(t_struct *s)
{
	char	res;

	res = va_arg(s->args, unsigned int);
	s->len += 1;
	ft_putchar(res);
}

void	sflag(t_struct *s)
{
	char	*res;
	int		i;

	res = va_arg(s->args, char *);
	if (res == NULL)
	{
		ft_putstr("(null)");
		s->len += 6;
		return ;
	}
	i = 0;
	while (res[i])
	{
		ft_putchar(res[i]);
		s->len++;
		i++;
	}
}