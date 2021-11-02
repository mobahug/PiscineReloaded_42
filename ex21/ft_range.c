/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:27:04 by ghorvath          #+#    #+#             */
/*   Updated: 2021/10/31 11:39:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*range;
	long int	len;
	int			count;

	len = max - min;
	count = 0;
	if (min >= max || len > 2147483647)
		return (0);
	range = malloc(sizeof(*range) * len);
	while (count < len)
	{
		range[count] = min + count;
		count++;
	}
	return (range);
}
