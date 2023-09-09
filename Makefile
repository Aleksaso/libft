
NAME = libft.a

SRC = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c

BONUS_SRC = ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) $(OBJS)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

##$(OBJS) :$(SRC)
##	gcc $(CFLAGS) -c $(SRC) (dejando esto en comentario me imprime todo arch cc adiciono @ delante de ar

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
bonus: $(BONUS_OBJS)
	@ar rcs $(NAME) $(BONUS_OBJS)
$(BONUS_OBJS) :$(BONUS_SRC)
	@gcc $(CFLAGS) -c $(BONUS_SRC)
.PHONY: all clean fclean re


## Funcionamiento de la regla de compilacion makefile
## 1. makefile busca la regla all y la ejecuta (en este caso, la regla all depende de la regla $(NAME) y de los objetos $(OBJS))
## 2. makefile busca la regla $(NAME) y la ejecuta (en este caso, la regla $(NAME) depende de los objetos $(OBJS))
## 3. makefile busca la regla $(OBJS) y la ejecuta (en este caso, la regla $(OBJS) depende de los archivos $(SRC))
## 4. makefile busca los archivos $(SRC) y los compila (en este caso, los archivos $(SRC) no dependen de nada)
## 5. makefile busca la regla clean y la ejecuta (en este caso, la regla clean depende de los objetos $(OBJS))
## 6. makefile busca la regla fclean y la ejecuta (en este caso, la regla fclean depende de la regla clean)
## 7. makefile busca la regla re y la ejecuta (en este caso, la regla re depende de las reglas fclean y all)
## 8. makefile busca la regla bonus y la ejecuta (en este caso, la regla bonus depende de los objetos $(BONUS_OBJS))
## 9. makefile busca la regla $(BONUS_OBJS) y la ejecuta (en este caso, la regla $(BONUS_OBJS) depende de los archivos $(BONUS_SRC))
## 10. makefile busca los archivos $(BONUS_SRC) y los compila (en este caso, los archivos $(BONUS_SRC) no dependen de nada)
