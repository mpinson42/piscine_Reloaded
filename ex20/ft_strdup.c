/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:57:43 by mpinson           #+#    #+#             */
/*   Updated: 2016/11/04 11:23:38 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		b;

	i = 0;
	b = 0;
	while (src[b])
		b++;
	str = (char*)malloc(sizeof(*str) * (b));
	while (i < b)
	{
		str[i] = src[i];
		i++;
	}
	str[b] = '\0';
	return (str);
}
