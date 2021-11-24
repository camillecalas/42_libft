SRCS    = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_split.c fr_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c libft.h

OBJS    = ${SRCS:.c=.o}

HEADER = libft.h

INCLUDE = includes/
NAME    = libft.a

CC              = gcc
RM              = rm -f

CFLAGS  = -Wall -Werror -Wextra

.c.o:
                        ${CC} ${CFLAGS} -I${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}:        ${OBJS}
                        ar rc ${NAME} ${OBJS}

all:            ${NAME}

clean:
                        ${RM} ${OBJS}

fclean:         clean
                        ${RM} ${NAME}

re:             fclean all

.PHONY:         all clean fclean re

