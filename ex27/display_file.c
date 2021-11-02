/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 09:14:26 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/02 08:32:55 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	display_file(char *str)
{
	int		fd;
	char	buffer;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (1);
	else
	{
		while (read(fd, &buffer, 1) != 0)
		{
			write(1, &buffer, 1);
		}
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc < 2)
		{
			ft_putstr("File name missing.\n");
			return (0);
		}
		if (argc > 2)
		{
			ft_putstr("Too many arguments.\n");
			return (0);
		}
	}
	if (display_file(argv[1]) == 1)
		return (1);
	return (0);
}
