##
## Makefile for make in /rendu/rendu_Systeme_Unix/PSU_2015_my_ls
##
## Made by munoz david
## Login   <munoz_d@epitech.net>
##
## Started on  Thu Nov 26 22:59:46 2015 munoz david
## Last update Mon Nov 30 10:42:36 2015 Munoz David
##


SRC	= src/error.c \
	src/lines.c \
	src/my_tab.c \
	src/free.c \
	src/main.c

OBJ	= $(SRC:.c=.o)

NAME	= bsq

LDFLAGS = -L./lib/my/ -lmy

CFLAGS	= -I./include/

RM 	= rm -f

CC	= gcc

DIR	= lib/my

$(NAME): $(OBJ)
	@(cd $(DIR) && $(MAKE))
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJ)
	cd $(DIR) && ($(MAKE) clean)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	cd $(DIR) && ($(MAKE) clean)

re: lib fclean all

.PHONY: all clean fclean re lib
