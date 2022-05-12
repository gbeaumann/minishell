NAME = minishell
CC = gcc -I $HOME/.brew/Cellar/readline/8.1.2/include
SRC = 	prompt.c\
		read_command.c\
		print_cmd_not_found.c\
		pwd.c\
		echo.c\

FLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(FLAGS) $(SRC) libft/libft.a -lreadline -framework OpenGL -framework AppKit -o $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJ)
fclean: clean
	make fclean -C libft
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re