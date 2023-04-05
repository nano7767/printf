# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svikornv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 15:03:52 by svikornv          #+#    #+#              #
#    Updated: 2023/03/26 15:13:45 by svikornv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRCS = 	ft_printf.c \
		case_c.c \
		case_s.c \
		case_p.c \
		case_d.c \
		case_i.c \
		case_u.c \
		case_x.c \
		case_ex.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	
re: fclean all

