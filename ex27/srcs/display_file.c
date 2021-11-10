/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngardzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:14:33 by ngardzie          #+#    #+#             */
/*   Updated: 2021/11/03 12:40:46 by ngardzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 4096

void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_display_file(char *file);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}

int	ft_display_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() error", 12);
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		write(2, "close() error", 13);
		return (1);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
