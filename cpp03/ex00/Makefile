# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 13:19:06 by abenheni          #+#    #+#              #
#    Updated: 2023/09/22 18:29:55 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRC =  main.cpp ClapTrap.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
%.o : %.cpp ClapTrap.hpp
	$(CC) $(CFLAGS)  -c $< -o $@ 
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
