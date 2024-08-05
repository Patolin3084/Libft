# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcrome <marcrome@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/06 11:56:01 by marcrome          #+#    #+#              #
#    Updated: 2024/05/08 14:57:35 by marcrome         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la libreria
NAME = libft.a

# Compilador y opciones de compilacion
CC = gcc

CFLAGS = -Wall -Werror -Wextra
# Fuentes

SRC 		= ft_strlen.c \
			 ft_memmove.c \
			 ft_memcpy.c \
			 ft_strlcpy.c \
			 ft_strlcat.c \
			 ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_memset.c \
			 ft_bzero.c \
			 ft_toupper.c \
			 ft_tolower.c \
			 ft_strchr.c \
			 ft_strrchr.c \
			 ft_strncmp.c\
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_strnstr.c \
			 ft_atoi.c \
			 ft_calloc.c \
			 ft_strdup.c \
			 ft_substr.c \
			 ft_strjoin.c \
			 ft_strtrim.c \
			 ft_split.c \
			 ft_itoa.c \
			 ft_strmapi.c \
			 ft_striteri.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putendl_fd.c \
			 ft_putnbr_fd.c \
# Objetos generados durante la compilación.

OBJS = $(SRC:.c=.o)
# Regla predeterminada para compilar la biblioteca

BONUS			=	ft_lstadd_back_bonus.c \
					ft_lstadd_front_bonus.c \
					ft_lstclear_bonus.c \
					ft_lstdelone_bonus.c \
					ft_lstiter_bonus.c \
					ft_lstlast_bonus.c \
					ft_lstmap_bonus.c \
					ft_lstnew_bonus.c \
					ft_lstsize_bonus.c \
					
BONUS_OBJS		= $(BONUS:.c=.o)

all: $(NAME)
# Regla para compilar tu proyecto principal y vincularlo con libft
$(NAME):$(OBJS)
	 @ar rcs $(NAME) $(OBJS)
# Regla para compilar cada archivo fuente en un objeto
%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $@
# Regla para eliminar objetos generados
clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
# Regla para eliminar la biblioteca.

fclean: clean
	@rm -f $(NAME)
	
# Regla para reconstruir el proyecto desde cero.
re: fclean all

bonus:			$(OBJS) $(BONUS_OBJS)
				@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: clean fclean all re bonus
