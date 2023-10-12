# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 18:26:36 by abenheni          #+#    #+#              #
#    Updated: 2023/09/13 15:46:37 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar
CC = c++
RM = rm -f
CFLAGS =  -Wall -Wextra -Werror -std=c++98 
SRC =  main.cpp 
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
%.o : %.cpp 
	$(CC) $(CFLAGS)  -c $< -o $@ 
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
