/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:19:08 by ghorvath          #+#    #+#             */
/*   Updated: 2021/11/01 14:07:01 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*newletter;

	i = 0;
	newletter = 0;
	newletter = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (newletter == 0)
		return (0);
	while (src[i])
	{
		newletter[i] = src[i];
		i++;
	}
	newletter[i] = '\0';
	return (newletter);
}
