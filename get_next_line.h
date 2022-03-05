/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:12:32 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/03/05 17:49:43 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFFER_SIZE
# define BUFFER_SIZE 42

# define True 1
# define False 0

# include <unistd.h>
# include <stdlib.h>

char    *get_next_line(int fd);

# endif