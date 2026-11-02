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
	int		bytesread;
	char	*line;

	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (line == NULL)
		return (NULL);
	bytesread = read(fd, line, BUFFER_SIZE);
	if (bytesread <= 0)
		return (free( line), NULL);
	return (line);
}

/*
char	*ft_nextline(int fd)
{
	int	i;

	i = 0;
	if (buffer[i] == '\\' && buffer[i + 1] == 'n')
	if (buffer[i] && buffer[i + 1] == '\n')
		return;
}
*/

char	*get_next_line(int fd)
{
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_reader(fd, buffer);
	return (buffer);
}

// test with stdinput AND file
int main(void)
{
	#include <stdio.h>
	#include <fcntl.h>

	int fd = open("testfile.txt", O_RDONLY);
	char *nextline = get_next_line(fd);
	char *line = ft_nextline(fd);
	printf("Line:\n%s", line);

	printf("%s\n", nextline);
	free(nextline);
	nextline = NULL;
	close(fd);

	return (0);
}
