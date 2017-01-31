/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:11:07 by mpinson           #+#    #+#             */
/*   Updated: 2016/11/04 12:58:16 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	buff(int fd)
{
	int		ret;
	char	buf[4097];

	ret = read(fd, buf, 4097);
	buf[ret] = '\0';
	ft_putstr(buf);
}

int		main(int argc, char *argv[])
{
	int fd;

	fd = 0;
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (0);
	buff(fd);
	close(fd);
	return (0);
}
