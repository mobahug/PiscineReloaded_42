/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:52:41 by ghorvath          #+#    #+#             */
/*   Updated: 2021/10/29 16:53:36 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int	main(int argc, char **argv)
{
	int	counter;

	counter = 1;
	if (argc == 1)
		return (0);
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
