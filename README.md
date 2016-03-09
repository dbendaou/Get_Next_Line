# Get_Next_Line

-------------------------- main de test --------------------------
#include <stdio.h>
int		 main(int ac, char **av)

{
	int fd;
	char *line;

	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		 printf("%s\n", line);
		 free (line);
	 }
	return (1);
}
