/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:12:41 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/03/07 18:52:52 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*reader(int fd, char *buff_str)
{
	char		*str;
	ssize_t		val;

	buff_str = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff_str)
		return (FALSE);
	val = 1;
	while (!is_newline(str) && val != 0)
	{
		val = read(fd, buff_str, BUFFER_SIZE);
		if (val == -1)
		{
			free(buff_str);
			return (FALSE);
		}
		buff_str[val] = '\0';
		str = ft_strjoin(str, buff_str);
	}
	free(buff_str);
	return (str);
}

char	*ft_get_line(char *save)
{
	int		i;
	char	*s;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	s = (char *)malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (save[i] && save[i] != '\n')
	{
		s[i] = save[i];
		i++;
	}
	if (save[i] == '\n')
	{
		s[i] = save[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_save(char *save)
{
	int		i;
	int		c;
	char	*s;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	s = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
	if (!s)
		return (NULL);
	i++;
	c = 0;
	while (save[i])
		s[c++] = save[i++];
	s[c] = '\0';
	free(save);
	return (s);
}

char	*get_next_line(int fd)
{
	char		*buff_str;
	static char	*line;
	size_t		len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (FALSE);
	buff_str = reader(fd, buff_str);
	if (!buff_str)
		return (FALSE);
	return (line);
	line = ft_get_line(buff_str);
	buff_str = ft_save(buff_str);
	return (line);
}
