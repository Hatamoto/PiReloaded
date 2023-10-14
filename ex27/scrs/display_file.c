/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:15:15 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/14 21:27:25 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	display(char *filename)
{
	int		fd;
	char	c;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 11);
		return ;
	}
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display(argv[1]);
	return (0);
}
