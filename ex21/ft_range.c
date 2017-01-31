/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:12:57 by mpinson           #+#    #+#             */
/*   Updated: 2016/11/04 11:24:45 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int a;
	int *str;
	int b;

	b = 0;
	a = max - min;
	if (min >= max)
		return (NULL);
	str = (int*)malloc(sizeof(*str) * (a));
	while (min < max)
	{
		str[b] = min;
		min++;
		b++;
	}
	return (str);
}
