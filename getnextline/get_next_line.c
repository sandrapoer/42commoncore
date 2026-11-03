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

	if (!buffer)
		line = ft_calloc(1, 1);
	line = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (line == NULL)
		return (NULL);
	bytesread = 1;
	//read(): reads up to BUFFER_SIZE bytes from fd into
	//the buffer startin at line
	while (bytesread > 0)
	{
		bytesread = read(fd, line, BUFFER_SIZE);
		if (bytesread == -1)
			return(free(buffer), NULL)
		// null-terminate
		line[bytesread] = 0;
		// put in buffer then free
		buffer = ft_put_in_buffer(line, buffer);
		// check for \n
		if (ft_strchr(line, '\n'))
			break;
	}
	free(line);
	return (buffer);
}

char	ft_put_in_buffer(char *line, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(line, buffer)
	free(line);
	return (temp);

}

char	*get_next_line(int fd)
{
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_reader(fd, buffer);
	if (!buffer)
		return (NULL):

	// whole line to return:
	
	// delete returned line from buffer && prepare for next line

	return (buffer);
}

// test with stdio AND file
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
