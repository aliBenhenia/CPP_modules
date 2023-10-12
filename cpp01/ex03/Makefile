# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 15:47:27 by abenheni          #+#    #+#              #
#    Updated: 2023/09/13 15:46:32 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
CC = c++
RM = rm -f 
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRC =  main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
%.o : %.cpp Weapon.hpp HumanB.hpp HumanA.hpp
	$(CC) $(CFLAGS)  -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
