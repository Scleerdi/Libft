# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: scleerdi <scleerdi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/08 14:23:00 by scleerdi      #+#    #+#                  #
#    Updated: 2022/02/23 15:48:00 by scleerdi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = atoi bzero isalnum isalpha isascii isdigit isprint \
		putchar_fd putendl_fd putnbr_fd putstr_fd strchr strjoin strlcpy \
		strlen strnstr tolower toupper strcpy memset memmove memcpy \
		strrchr strncmp strlcat memchr memcmp calloc strdup strndup \
		substr strcat strtrim itoa split strmapi striteri isspace \
		isupper islower strnew num_len strnlen strclen get_next_line \
		lstnew lstadd_front lstsize lstadd_back utoa_base \
		puthex_fd lstlast lstiter lstdelone lstclear lstmap

SOURCE := $(SOURCE:%=ft_%.c)
OBJECT := $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@echo "Compiling Libft"
	@ar -rcs $(NAME) $(OBJECT)

$(OBJECT): $(SOURCE)
	@gcc -Wall -Werror -Wextra -c $(SOURCE)

clean:
	@-rm -f $(OBJECT)

fclean: clean
	@-rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
