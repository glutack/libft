# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irmoreno <irmoreno@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 16:30:09 by irmoreno          #+#    #+#              #
#    Updated: 2023/03/30 12:36:19 by irmoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
SRCS		= 	./src/ft_isalpha.c ./src/ft_isdigit.c ./src/ft_isalnum.c\
				./src/ft_isascii.c ./src/ft_isprint.c ./src/ft_strlen.c\
				./src/ft_memset.c ./src/ft_bzero.c ./src/ft_memcpy.c\
				./src/ft_memmove.c ./src/ft_strlcpy.c ./src/ft_strlcat.c\
				./src/ft_toupper.c ./src/ft_tolower.c ./src/ft_strchr.c\
				./src/ft_strrchr.c ./src/ft_strncmp.c ./src/ft_memchr.c\
				./src/ft_memcmp.c ./src/ft_strnstr.c ./src/ft_atoi.c\
				./src/ft_calloc.c ./src/ft_strdup.c	./src/ft_substr.c\
				./src/ft_strjoin.c ./src/ft_strtrim.c ./src/ft_split.c\
				./src/ft_itoa.c	./src/ft_strmapi.c ./src/ft_striteri.c\
				./src/ft_putchar_fd.c ./src/ft_putstr_fd.c\
				./src/ft_putendl_fd.c ./src/ft_putnbr_fd.c\
				./src/get_next_line.c ./src/ft_free_split.c
OBJS		= 	${SRCS:.c=.o}
SRCS_BONUS	=	./src/ft_lstnew_bonus.c ./src/ft_lstadd_front_bonus.c\
				./src/ft_lstsize_bonus.c ./src/ft_lstlast_bonus.c\
				./src/.ft_lstadd_back_bonus.c ./src/ft_lstdelone_bonus.c\
				./src/ft_lstclear_bonus.c ./src/ft_lstiter_bonus.c\
				./src/ft_lstmap_bonus.c 
OBJS_BONUS	=	${SRCS_BONUS:.c=.o}
CFLAGS		= 	-Wall -Wextra -Werror
RM			= 	rm -f

all: $(NAME)

%.o: %.c
	@gcc ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS} ${OBJS_BONUS} $(FT_PRINTF)
	@make -C ./ft_printf
	@gcc -c ${CFLAGS} ${SRCS}
	@ar crs ${NAME} ${OBJS} ${OBJS_BONUS}
	@echo "libft -> creada"

clean: 
	@make -C ./ft_printf clean
	@${RM} ${OBJS} ${OBJS_BONUS}
	@echo "libft -> objetos eliminados"

fclean: clean
	@make -C ./ft_printf fclean
	@${RM} ${NAME}
	@echo "libft -> eliminado"

re: fclean all
	@echo "libft :D"

.PHONY: all clean fclean re bonus
