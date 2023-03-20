# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkumbhan <hkumbhan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 11:34:52 by hkumbhan          #+#    #+#              #
#    Updated: 2023/03/17 12:21:22 by hkumbhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
#SRCS= ft_isdigit.c ft_.......
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c \
		

all: $(NAME)


$(NAME): $(OBJS)
#	cc -o $(CFLAGS) 
	ar rcs $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
#	$(CC) -c $(CFLAGS) $(SRCS)
	$(CC) -c $(CFLAGS) -o  $@ $<
	
clean:
#	/bin/rm	-f $(OBJS)
	rm	-f $(OBJS)

fclean: clean
#	/bin/rm -f $(NAME)
	rm -f $(NAME)
	 	
re: fclean all
.PHONY: clean
