CC = cc
CFLAGS = -Wall -Werror -Wextra -g
NAME = libft.a
OBJECTS = ft_isdigit.o ft_isalpha.o ft_isalnum.o \
	  ft_isascii.o ft_isprint.o ft_tolower.o \
	  ft_toupper.o ft_atoi.o ft_strlen.o \
	  ft_strlcpy.o ft_strlcat.o ft_strchr.o \
	  ft_strncmp.o ft_strnstr.o ft_strdup.o \
	  ft_memset.o ft_bzero.o ft_memcpy.o \
	  ft_memmove.o ft_memchr.o ft_memcmp.o \
	  ft_calloc.o ft_putchar_fd.o ft_putstr_fd.o \
	  ft_putendl_fd.o ft_itoa.c ft_putnbr.o \
	  ft_substr.o ft_strjoin.o ft_strtrim.o \
	  ft_split.o ft_strmapi.o

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^

prueba: $(OBJECTS) prueba.o
	$(CC) $(CFLAGS) $^ -o $@

prueba.o: prueba.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isdigit.o: ft_isdigit.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isalpha.o: ft_isalpha.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isalnum.o: ft_isalnum.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isascii.o: ft_isascii.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isprint.o: ft_isprint.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_tolower.o: ft_tolower.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_atoi.o: ft_atoi.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_toupper.o: ft_toupper.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlen.o: ft_strlen.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcpy.o: ft_strlcpy.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcat.o: ft_strlcat.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strchr.o: ft_strchr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strncmp.o: ft_strncmp.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strnstr.o: ft_strnstr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strdup.o: ft_strdup.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memset.o: ft_memset.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_bzero.o: ft_bzero.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcpy.o: ft_memcpy.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memmove.o: ft_memmove.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memchr.o: ft_memchr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcmp.o: ft_memcmp.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_calloc.o: ft_calloc.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putchar_fd.o: ft_putchar_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putstr_fd.o: ft_putstr_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putendl_fd.o: ft_putendl_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
	
ft_itoa.o: ft_itoa.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putnbr_fd.o: ft_putnbr_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_substr.o: ft_substr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strjoin.o: ft_strjoin.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strtrim.o: ft_strtrim.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_split.o: ft_split.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strmapi.o: ft_strmapi.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean:
	@rm ./*.o

fclean: clean
	rm $(NAME)

cprueba: clean
	rm prueba
re: fclean all
