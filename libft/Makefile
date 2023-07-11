# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkumbhan <hkumbhan@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 11:34:52 by hkumbhan          #+#    #+#              #
#    Updated: 2023/07/10 13:37:50 by hkumbhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Set the name of the library
NAME = libft.a

# Set the compiler and compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directory to store object files
OBJDIR = obj

# Set the source files for the library
SRC_LIBFT = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c \
			ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_print_bit.c

SRC_LIST = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRC_GNL = get_next_line_utils.c get_next_line.c 

SRC_PRINTF = ft_printstr.c ft_printnum.c ft_printf.c

SRCS = $(SRC_LIBFT) $(SRC_GNL) $(SRC_LIST) $(SRC_PRINTF)

# Set the object files for mandatoru and bonus part of the libray 
_OBJS = $(SRCS:%.c=%.o)
OBJS = $(patsubst %,$(OBJDIR)/%,$(_OBJS))

# Define the "all" rule
all: $(NAME)

# Define the rule to create the library
$(NAME): $(OBJS)
	ar rcs $@ $^

# Define the rule to compile the source files
$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm	-f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
norm: $(SRCS)
	$(shell norminette | grep Error)
	 	
re: fclean all

# Specify that these rules do not correspond to a file name
.PHONY: all clean fclean re
