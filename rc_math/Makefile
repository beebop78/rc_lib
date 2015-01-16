# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcargou <rcargou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/16 15:24:05 by rcargou           #+#    #+#              #
#    Updated: 2015/01/16 15:38:17 by rcargou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = librcmath.a

SRC = rcm_dotproduct.c rcm_rotmatrice.c rcm_vecnormalise.c rcm_vecsquarelenght.c rcm_2dequation.c \
	rcm_crossproduct.c  rcm_min.c \
	rcm_vecscalarfactor.c rcm_vecsum.c rcm_fabs.c \
	rcm_vecneg.c  rcm_vecnorme.c rcm_sqrt.c rcm_vecsub.c

OBJ = $(SRC:.c=.o)

All : $(NAME)

$(NAME) :
	@gcc -c $(SRC) rc_math.h
	@ar rc -o $(NAME) $(OBJ)

clean :
	@rm $(OBJ)

fclean : 
	@rm $(NAME)

re : fclean All
