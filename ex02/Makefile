# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epinaud <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/14 23:52:40 by epinaud           #+#    #+#              #
#    Updated: 2025/07/28 15:02:35 by epinaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE = nowWeareTalking

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g3

INCLUDES = -I. -Iincludes/

LDLIBS = 

OBJ_DIR = .obj

SRCS = main.cpp Fixed.cpp

$(OBJ_DIR)/%.o : %.cpp
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

all: $(OBJ_DIR) $(EXE)

$(EXE) :
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS)

nowWeareTalking: $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

.obj:
	@mkdir -p .obj

clean:
	@rm -f $(EXE)

fclean:  clean
	@rm -rf $(OBJ_DIR)

re: fclean $(OBJ_DIR) $(EXE)

.PHONY:  all clean fclean re
