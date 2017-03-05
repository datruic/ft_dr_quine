# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppokar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/04 11:38:14 by ppokar            #+#    #+#              #
#    Updated: 2017/03/04 11:38:16 by ppokar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen

SRCS = Colleen.c

OBJS = $(SRCS:.c=.o)

CC = clang

FLAGS = -Wall -Werror -Wextra

RM = rm -f

all	: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	@$(CLEAN)

fclean: clean
	$(RM) $(NAME)				

re: fclean all		

.PHONY: all clean fclean re
