#ifndef MY_PRINTF_H
# define MY_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_struct
{
	va_list	args;
	int		len;
}		t_struct;

int		my_printf(const char *input, ...);
void	pflag(t_struct *s);
void	xflag(t_struct *s);
void	bigxflag(t_struct *s);
void	cflag(t_struct *s);
void	diflag(t_struct *s);
void	uflag(t_struct *s);
void	percflag(t_struct *s);
void	sflag(t_struct *s);

void	uprint(unsigned int i, t_struct *s);
void	bigxprint(unsigned int i, t_struct *s);
void	ptrprint(unsigned long int i, t_struct *s);
void	smallxprint(unsigned int i, t_struct *s);

void	ft_putchar(char c);
void	ft_putnbr(long int nb);
void	ft_putstr(char *str);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);

#endif