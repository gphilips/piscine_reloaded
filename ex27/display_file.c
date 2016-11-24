/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:45:16 by gphilips          #+#    #+#             */
/*   Updated: 2016/11/04 20:26:52 by gphilips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#define BUFF_SIZE 4098

void	display_file(int fd)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];

	ret = read(fd, buff, BUFF_SIZE);
	ft_putstr(1, buff);
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc > 2)
		ft_putstr(2, "Too many arguments.\n");
	else if (argc < 2)
		ft_putstr(2, "File name missing.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		display_file(fd);
		close(fd);
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
