/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isrange.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 18:20:18 by evoisin           #+#    #+#             */
/*   Updated: 2015/01/28 18:20:31 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int						ft_isrange(int *tab, int nb)
{
	int					i;

	i = 0;
	while (i != nb - 1)
	{
		if (tab[i] < tab[i + 1])
			return (i);
		i++;
	}
	return (-1);
}

static void				viderl2(t_push *p)
{
	while (p->nbl2 != 0)
		ft_pa(p);
	return ;
}

void					ft_afftab(int *tab, int size, int pile)
{
	int					i;

	i = 0;
	if (pile == 1)
		ft_putcolor("a: ", RED);
	else
		ft_putcolor("b: ", BLUE);
	while (i != size)
	{
		ft_putnbr(tab[i++]);
		ft_putchar(' ');
	}
	ft_putchar('\n');
	return ;
}

static unsigned int		ft_wheremin(int *tab, int size, t_push *p)
{
	int					pos;
	int					s;
	unsigned int		tmp;

	tmp = 0;
	s = size;
	pos = 0;
	p->min = tab[0];
	while (s > 0)
	{
		pos = 0;
		while (pos < size)
		{
			if (tab[pos] < p->min)
			{
				tmp = pos;
				p->min = tab[pos];
			}
			pos++;
		}
		s--;
	}
	return (tmp);
}

void					ft_rangetab(t_push *p)
{
	unsigned int		i;

	while (ft_isrange(p->l1, p->nbl1) != -1)
	{
		i = ft_wheremin(p->l1, p->nbl1, p);
		if (i == (unsigned int)p->nbl1 - 1 && p->nb < 3)
			ft_sa(p);
		while (p->l1[p->nbl1 - 1] != p->min && ft_isrange(p->l1, p->nbl1) != -1)
		{
			if (i == (unsigned int)p->nbl1 - 2)
				ft_sa(p);
			else
				ft_ra(p);
		}
		if (ft_isrange(p->l1, p->nbl1) != -1)
			ft_pb(p);
	}
	viderl2(p);
	return ;
}
