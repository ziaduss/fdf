NAME = libft.a

SRC = ./ft_lstadd.c \
		./ft_memmove.c \
		./ft_strchr.c \
		./ft_strmap.c \
		./ft_strstr.c \
		./ft_lstdel.c \
		./ft_memset.c \
		./ft_strclr.c \
		./ft_strmapi.c \
		./ft_strsub.c \
		./ft_lstdelone.c \
		./ft_nbrlen.c \
		./ft_strcmp.c \
		./ft_strncat.c \
		./ft_strtrim.c \
		./ft_atoi.c \
		./ft_lstiter.c \
		./ft_putchar.c \
		./ft_strcpy.c \
		./ft_strncmp.c \
		./ft_tolower.c \
		./ft_bzero.c \
		./ft_lstmap.c \
		./ft_putchar_fd.c \
		./ft_strdel.c \
		./ft_strncpy.c \
		./ft_toupper.c \
		./ft_count_word.c \
		./ft_lstnew.c \
		./ft_putendl.c \
		./ft_strdup.c \
		./ft_strndup.c \
		./ft_isalnum.c \
		./ft_memalloc.c \
		./ft_putendl_fd.c \
		./ft_strequ.c \
		./ft_strnequ.c \
		./ft_isalpha.c \
		./ft_memccpy.c \
		./ft_putnbr.c \
		./ft_striter.c \
		./ft_strnew.c \
		./ft_isascii.c \
		./ft_memchr.c \
		./ft_putnbr_fd.c \
		./ft_striteri.c \
		./ft_strnstr.c \
		./ft_isdigit.c \
		./ft_memcmp.c \
		./ft_putstr.c \
		./ft_strjoin.c \
		./ft_strrchr.c \
		./ft_isprint.c \
		./ft_memcpy.c \
		./ft_putstr_fd.c \
		./ft_strlcat.c \
		./ft_strrev.c \
		./ft_itoa.c \
		./ft_memdel.c \
		./ft_strcat.c \
		./ft_strlen.c \
		./ft_strsplit.c \
		./get_next_line.c

HEADERS = ./libft.h

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)

%.o: %.c
	@ gcc $(FLAGS) -I $(HEADERS) -o $@ -c $<

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
