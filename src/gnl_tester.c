#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	fd1 = open("../src_tester/gnl_t/tests/test.txt", O_RDONLY);
	fd2 = open("../src_tester/gnl_t/tests/test1.txt", O_RDONLY);
	fd3 = open("../src_tester/gnl_t/tests/corrupted_file.txt", O_RDONLY);

	i = 1;
	printf("##############FIRST FILE\n");
	while ((line = get_next_line(fd1)))
	{
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	i = 0;
	printf("\n##############SECOND FILE\n");
	while ((line = get_next_line(fd2)))
	{
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	i = 0;
	printf("\n##############THIRD FILE\n");
	while ((line = get_next_line(fd3)))
	{
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
