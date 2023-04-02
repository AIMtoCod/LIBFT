#!/bin/bash

DIR="/Users/hkumbhan/Desktop/projects/LIBFT/libft"
FILES="ft_strlen.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memcmp.c \
ft_memchr.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_itoa.c \
ft_split.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c"

MISSING_FILES=""

if [ -d "$DIR" ]; then
    echo "Checking files in $DIR..."
    for FILE in $FILES; do
        if [ ! -f "$DIR/$FILE" ]; then
            MISSING_FILES+="$FILE"
        fi
    done
    if [ "$MISSING_FILES" != "" ]; then
		printf "\033[31mMissing files found in $DIR\033[0m\n"
        printf "\033[35mThe following files were not found in $DIR:\033[0m\n\n"
        for file in $MISSING_FILES; do
            echo "- $file"
        done
		printf "\n"
        exit 1
    else
        echo -e "\033[32m╔══════════════════════════════════════════════════════════════════════════════╗"
		echo -e "║                 🎉🥳 All files Present! Congratulations! 🥳🎉                 ║"       
		echo -e "╚══════════════════════════════════════════════════════════════════════════════╝\033[0m"
        exit 0
    fi
else
    echo "Folder $DIR not found"
    exit 1
fi
