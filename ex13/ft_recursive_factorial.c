/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:01:26 by mpinson           #+#    #+#             */
/*   Updated: 2016/11/04 11:19:56 by mpinson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 12)
		nb = 0;
	else if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	else if (nb == 0)
		nb = 1;
	else if (nb < 0)
		nb = 0;
	return (nb);
}
