/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoernba <spoernba@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:52:23 by spoernba          #+#    #+#             */
/*   Updated: 2026/11/02 14:52:24 by spoernba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
1) returns read line = correct behaviour
2) returned line + \n except it is the end of 
   the file or already \n
3) returns NULL = nothing else to read or error
*/

static char	*ft_reader(int fd, char *buffer)
{
	ssize_t	bytesread;
	char	*chunk;

	chunk = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!chunk)
		return (free(buffer), NULL);
	bytesread = 1;
	while (!ft_strchr(buffer, '\n') && bytesread > 0)
	{
		bytesread = read(fd, chunk, BUFFER_SIZE);
		if (bytesread == -1)
			return(free(chunk), free(buffer), NULL);
		chunk[bytesread] = '\0';
		buffer = ft_strjoin_free(buffer, chunk);
		if (!buffer)
			return (free(chunk), NULL);
	}
	free(chunk);
	return (buffer);
}

static char	*ft_get_one_line(char *buffer)
{
	size_t	len;

	if (buffer[0] == '\0')
		return (NULL);
	len = 0;
	while (buffer[len] && buffer[len] != '\n')
		len++;
	if (buffer[len] == '\n')
		len++;
	return (ft_strdup(buffer, len));
}

static char	*ft_update_buffer(char *buffer)
{
	char	*newline;
	char	*rest;

	newline = ft_strchr(buffer, '\n');
	if (!newline || !newline[1])
		return (free(buffer), NULL);
	rest = ft_strdup(newline + 1, ft_strlen(newline + 1));
	return (free(buffer), rest);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_reader(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_one_line(buffer);
	if (!line)
	{
		free(buffer);
		buffer = NULL;
		return (NULL);
	}
	buffer = ft_update_buffer(buffer);
	return (line);
}