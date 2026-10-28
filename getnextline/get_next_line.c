#include "get_next_line.h"

/*
1) returns read line = correct behaviour
2) returned line + \n except it is the end of 
   the file or already \n
3) returns NULL = nothing else to read or error
*/

static char	*ft_reader(int fd)
{
	int		bytesread;
	char	*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	bytesread = read(fd, buffer, BUFFER_SIZE);
	if (bytesread <= 0)
		return (free( buffer), NULL);
	return (buffer);
}


char	*get_next_line(int fd)
{
	char	*buffer;

	buffer = ft_reader(fd);
	return (buffer);
}

// test with stdinput AND file
int main(void)
{
	#include <stdio.h>
	#include <fcntl.h>

	int fd = open("testfile.txt", O_RDONLY);
	char *nextline = get_next_line(fd);

	printf("%s\n", nextline);
	free(nextline);
	nextline = NULL;
	close(fd);

	return (0);
}