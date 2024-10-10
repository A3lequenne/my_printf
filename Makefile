NAME = libftprintf.a

SRCS = \
	my_printf.c \
	flags/diuflag.c \
	flags/csflag.c \
	flags/minilibft.c \
	flags/puxxprint.c \
	flags/pxxflag.c \

OBJS = $(SRCS:.c=.o)

CC		= gcc
RM		= rm -f
AR		= ar rcs

CFLAGS = -Wall -Wextra -Werror

.c.o:
	@$(CC) $(CFLAGS) -g -c $< -o $@

$(NAME): $(OBJS)
	@echo "Creating archive $(NAME)"
	@$(AR) $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all