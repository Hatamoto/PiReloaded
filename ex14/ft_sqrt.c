/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:03:49 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/15 00:25:59 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	nc;
	long	nd;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	nc = nb;
	nd = 2;
	while (nd * nd <= nc)
	{
		if ((nd * nd) == nc)
			return (nd);
		nd++;
	}
	return (0);
}
