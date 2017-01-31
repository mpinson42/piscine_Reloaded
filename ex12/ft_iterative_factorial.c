/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 15:45:50 by mpinson           #+#    #+#             */
/*   Updated: 2016/11/04 11:18:32 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if (nb > 12)
		return (0);
	else if (nb > 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	else if (nb == 0)
		result = 1;
	else if (nb < 0)
		result = 0;
	return (result);
}
