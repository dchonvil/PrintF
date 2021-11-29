CC = clang

CFLAGS = -Wall -Wextra -Werror

CD = cd ..

MK = make

RM = rm -rf

NAME = ft_printf

MORE = bns

all: $(NAME)

bonus: $(MORE)

ft_printf: 
	$(CD) && $(MK) && $(MK) clean
	$(CC) $(CFLAGS) -o $(NAME) -I.. -L.. main.c ../libftprintf.a

bns:
	$(CD) && $(MK) bonus && $(MK) clean
	$(CC) $(CFLAGS) -o $(NAME) -I.. -L.. main.c ../libftprintf.a

clean:
	$(CD) && $(MK) clean

fclean:
	$(RM) $(NAME) && $(CD) && $(MK) clean && $(MK) fclean

re:
	$(RM) $(NAME) && $(CD) && $(MK) clean && $(MK) fclean && $(MK)