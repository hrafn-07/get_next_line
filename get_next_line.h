/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:12:32 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/03/07 17:56:40 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFFER_SIZE
# define BUFFER_SIZE 42

# define TRUE 1
# define FALSE 0
# define ERROR -1

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		is_newline(char *str);
char	*reader(int fd, char *buff_str);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif