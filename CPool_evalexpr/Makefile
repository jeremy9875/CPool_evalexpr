##
## Makefile for Makefile in /home/jeremy.el-kaim/CPool_infinadd
## 
## Made by jeremy elkaim
## Login   <jeremy.el-kaim@epitech.net>
## 
## Started on  Mon Oct 24 11:40:10 2016 jeremy elkaim
## Last update Fri Oct 28 22:06:54 2016 jeremy elkaim
##

NAME    = eval_expr

SRC    = eval_expr.c	\
	 eval_expr_calcsub.c	\

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
