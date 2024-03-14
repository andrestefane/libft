CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =

SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_strcpy.c ft_strlcat.c ft_strlen.c ft_toupper.c ft_tolower.c
OBJS = $(SRCS:.c=.o)
TARGET = libft.a

all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean