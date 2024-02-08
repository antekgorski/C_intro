# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tests.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zslowian <zslowian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 16:43:14 by zslowian          #+#    #+#              #
#    Updated: 2024/01/28 17:15:21 by zslowian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

#Compile Rush 01
cc -Wall -Wextra -Werror -o rush-01 *.c
echo "First test"
echo
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
echo
echo "Second test"
echo
./rush-01 "2 2 1 3 2 2 3 1 2 2 1 3 2 2 3 1" | cat -e
rm ./rush-01
