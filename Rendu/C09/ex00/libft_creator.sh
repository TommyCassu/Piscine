# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcassu <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 11:23:13 by tcassu            #+#    #+#              #
#    Updated: 2024/09/23 11:45:36 by tcassu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Werror -Wextra ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a *.o
