RM	= rm -rf
CC	=gcc 
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
INCLUDES = -I ./includes
SRCS	=	srcs/ft_printf.c\
			srcs/ft_printf_utils.c\
			srcs/handle_chars.c\
			srcs/handle_hexs.c\
			srcs/handle_numbers.c\
			srcs/handle_percents.c\
			srcs/handle_pointers.c\
			srcs/handle_strings.c\
			srcs/handle_unsigned_numbers.c\

	

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	${CC} -c ${CFLAGS} ${INCLUDES} $< -o $@

$(NAME): $(OBJ)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME) *.o

re: fclean all

.PHONY: all clean fclean re

