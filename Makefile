.PHONY: all clean fclean re norm

NAME = fdf

SRCS = main.c \
	ft_parse.c \
	ft_readfile.c \
	ft_graph.c \
	ft_trace_line.c \
	ft_eventkey.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra  -ggdb

INC = -I minilibx_macos -I libft

HEADERS = fdf.h

LIBS = minilibx_macos/libmlx.a libft/libft.a

EXT_LIBS = -framework OpenGl -framework AppKit

all: $(NAME)

$(NAME): $(LIBS) $(OBJS)
	gcc $(FLAGS) $(LIBS) $(EXT_LIBS) $(OBJS) -o $(NAME)

$(LIBS):
	make -C ./libft
	make -C ./minilibx_macos

./%.o: ./%.c $(HEADERS)
	gcc $(FLAGS) $(INC) -o $@ -c $<

clean:
	make clean -C ./minilibx_macos
	make clean -C ./libft/
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./libft/
	rm -f $(NAME)

re: fclean all

norm:
	norminette $(SRCS) $(HEADERS)
