/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:12:41 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/03/05 18:39:16 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *buff_str;
    char    *line;
    size_t  read_len;

    read_len = read();
    buff_str = malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!buff_str)
        return (False);

}