/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:39:53 by ghorvath          #+#    #+#             */
/*   Updated: 2021/10/29 13:19:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt * sqrt <= nb)
	{
		sqrt++;
		if (sqrt * sqrt == nb)
			return (sqrt);
	}
	return (0);
}
