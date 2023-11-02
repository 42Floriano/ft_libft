FILES = ft_atoi\
            ft_bzero\
            ft_calloc\
            ft_isalnum\
            ft_isalpha\
            ft_isascii\
            ft_isdigit\
            ft_isprint\
            ft_itoa\
            ft_memchr\
            ft_memcmp\
            ft_memcpy\
            ft_memmove\
            ft_memset\
            ft_putchar_fd\
            ft_putendl_fd\
            ft_putnbr_fd\
            ft_putstr_fd\
            ft_split\
            ft_strchr\
            ft_strdup\
            ft_striteri\
            ft_strjoin\
            ft_strlcat\
            ft_strlcpy\
            ft_strlen\
            ft_strmapi\
            ft_strncmp\
            ft_strnstr\
            ft_strrchr\
            ft_strtrim\
            ft_substr\
            ft_tolower\
            ft_toupper\

BONUS = ft_lstadd_back.c\
			ft_lstadd_front.c\
			ft_lstclear.c\
			ft_lstdelone.c\
			ft_lstlast.c\
			ft_lstnew.c\
			ft_lstsize.c\
			
BONUS_OBJS = $(BONUS:.c=.o)
CFILES = $(FILES:%=%.c)
OFILES = $(FILES:%=%.o)

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Target library
NAME = libft.a

# Build rule for the library
all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $@ $(OFILES)

# Build rule for object files
$(FILES).o: $(FILES).c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove object files
clean:
	@rm -f $(OFILES)

# Clean rule to remove object bonus files
bclean:
	@rm -f $(BONUS_OBJS)

# Full clean rule to remove object files and the library
fclean: clean
	@rm -f $(NAME)

# Rebuild rule
re: fclean all

bonus:            $(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus