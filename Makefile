# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astefane <astefane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 17:31:38 by astefane          #+#    #+#              #
#    Updated: 2024/04/04 19:52:15 by astefane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

// definimos una lista de archivos que forman parte del proyecto,

SRCS = \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c

// definimos una lista de objetos que se generan apartir de 'SRCS'
//Tomamos cada archivos de 'SRCS' que tenga extensiones '.c' y lo remplaza por '.o'
OBJS			= $(SRCS:.c=.o)

//definimos una llista de archivos adicionales
BONUS			= \
ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiler_bonus.c \
ft_lstmap_bonus.c


//Tomamos cada archivos de 'BONUS' que tenga extensiones '.c' y lo remplaza por '.o'

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

//la variable 'NAME' especifica el nombre del archivo de salida
NAME			= libft.a

//especificamos que al llamar al objetos 'make' llevara a contruir 'libft.a'
all:			$(NAME)

//especificamos como construir el archivo 'libft.a' dependiendo de como lo hayamos indicado en 'OBJS'
//si alguno de los archivos se han modificado desde la ultima vez se ejecutara ar rcs sobre la 'libft.a'

$(NAME):		$(OBJS)
//significado de 'ar' = 'r' = inserta o remplaza.
//significado de 'rcs' = 'r' remplaza o inserta \\ 'c' = crea el archivo si no existe
// 's' = crea un indice de simbolos para la biblioteca
				ar rcs $(NAME) $(OBJS)
//con make clean limpiaremos los objetos y los objetos bonus
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)
// con make fclean limpiaremos 'libft.a'
fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
// con '.PHONY' hacemos indicar que los ojbeots no son archivos reales y por lo tanto no se debe
// buscar o compilarlos. En su lugar make ejecura las reglas asociadas con estos objetos siempre que se invoquen
.PHONY:			all clean fclean re bonus
make ejecutará las reglas definidas para estos objetivos