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

################################################################################
###############                     CONFIG                        ##############
################################################################################

NAME := libft.a # name of the library
CC := cc
CFLAGS = -Wall -Wextra -Werror -g $(addprefix -I, $(INC_DIRS))

################################################################################
###############                 PRINT OPTIONS                     ##############
################################################################################

G := \033[32m
X := \033[0m
BO := $(shell tput bold)
LOG := printf "[$(BO)$(G)ⓘ INFO$(X)] %s\n"

################################################################################
###############                  DIRECTORIES                      ##############
################################################################################

OBJ_DIR := _obj
INC_DIRS := ./include
SRC_DIRS := ./char/ ./convert/ ./list/ ./memory/ ./io/ \
	    ./string/ ./utils/ ./gnl/ ./printf/

# Tell the Makefile where headers and source files are
vpath %.h $(INC_DIRS)
vpath %.c $(SRC_DIRS)

################################################################################
###############                  SOURCE FILES                     ##############
################################################################################

SRC_CHAR := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	    ft_toupper.c ft_tolower.c ft_isspace.c

SRC_CONVERT := ft_atoi.c ft_itoa.c
SRC_LIST = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	   ft_lstiter.c ft_lstmap.c
SRC_MEMORY := ft_bzero.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c \
	      ft_memcpy.c
SRC_OUTPUT := ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
SRC_STRING := ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	      ft_strncmp.c ft_strnstr.c ft_strdup.c ft_strjoin.c \
	      ft_strtrim.c ft_substr.c ft_strmapi.c ft_striteri.c ft_strcmp.c \
	      ft_strndup.c
SRC_UTILS := ft_calloc.c ft_print_bit.c ft_split.c free_arr.c \
	     ft_split_pipex.c
SRC_GNL := get_next_line_utils.c get_next_line.c 
SRC_PRINTF := ft_printstr.c ft_printnum.c ft_printf.c ft_fprintf.c

SRCS := $(SRC_CHAR) $(SRC_CONVERT) $(SRC_LIST) $(SRC_MEMORY) \
	$(SRC_OUTPUT) $(SRC_STRING) $(SRC_UTILS) $(SRC_GNL) $(SRC_PRINTF)

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

################################################################################
########                         COMPILING                      ################
################################################################################

all: $(NAME)

# Define the rule to create the library
# Used Options
# r : Insert the objs into the archive
# c : Create the archive if it doesn't exist
# s : Create an index for the archive

# s option is an efficiency option helpful when
# linking programs with the library
$(NAME): $(OBJS)
	@ar rcs $@ $^

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(LOG) "Compiling $(notdir $@)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@$(LOG) "Creating object directory."
	@mkdir -p $@

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
		$(LOG) "Cleaning $(notdir $(OBJ_DIR))"; \
		rm -rf $(OBJ_DIR); \
	else \
		$(LOG) "No objects to clean."; \
	fi

fclean: clean
	@if [ -f $(NAME) ]; then \
		$(LOG) "Cleaning $(notdir $(NAME))"; \
		rm -f $(NAME); \
	else \
		$(LOG) "No library to clean."; \
	fi
	@rm -rf *.dSYM *.out
	
norm: $(SRCS)
	$(shell norminette | grep Error)
	 	
re: fclean all

# Specify that these rules do not correspond to a file name
.PHONY: all clean fclean re

# Set the name of the library
# NAME = libft.a
#
# CC = cc
# CFLAGS = -Wall -Wextra -Werror
#
# OBJDIR = obj
#
# SRC_LIBFT = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c \
# 			ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
# 			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_memchr.c ft_strnstr.c ft_atoi.c \
# 			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c \
# 			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_print_bit.c
#
# SRC_LIST = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
# 				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
#
# SRC_GNL = get_next_line_utils.c get_next_line.c 
#
# SRC_PRINTF = ft_printstr.c ft_printnum.c ft_printf.c
#
# SRCS = $(SRC_LIBFT) $(SRC_GNL) $(SRC_LIST) $(SRC_PRINTF)
#
# _OBJS = $(SRCS:%.c=%.o)
# OBJS = $(patsubst %,$(OBJDIR)/%,$(_OBJS))
#
# all: $(NAME)
#
# $(NAME): $(OBJS)
# 	ar rcs $@ $^
#
# $(OBJDIR)/%.o: %.c | $(OBJDIR)
# 	@$(CC) $(CFLAGS) -c $< -o $@
#
# $(OBJDIR):
# 	mkdir -p $(OBJDIR)
#
# clean:
# 	rm	-f $(OBJS)
#
# fclean: clean
# 	rm -f $(NAME)
# 	
# norm: $(SRCS)
# 	$(shell norminette | grep Error)
# 	 	
# re: fclean all
#
# .PHONY: all clean fclean re
