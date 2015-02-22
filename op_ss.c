/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_l1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 19:15:48 by evoisin           #+#    #+#             */
/*   Updated: 2015/01/28 19:15:56 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sa(t_push *p)
{
	int	tmp;

	if (!p->l1[p->nbl1 - 1])
		return ;
	tmp = p->l1[p->nbl1 - 1];
	p->l1[p->nbl1 - 1] = p->l1[p->nbl1 - 2];
	p->l1[p->nbl1 - 2] = tmp;
	ft_option(p, "sa");
}

void	ft_sb(t_push *p)
{
	int	tmp;

	if (!p->l2[1])
		return ;
	tmp = p->l2[0];
	p->l2[0] = p->l2[1];
	p->l2[1] = tmp;
	ft_option(p, "sb");
}

void	ft_ss(t_push *p)
{
	if (p->nbl1 != 0)
		ft_sa(p);
	if (p->nbl2 != 0)
		ft_sb(p);
}

void	ft_pa(t_push *p)
{
	int	*tmp;

	tmp = p->l1;
	if (p->nbl2 == 0)
		return ;
	p->l1 = ft_addandalloc(p->nbl1 + 1, tmp, p->l2[p->nbl2 - 1]);
	tmp = p->l2;
	p->l2 = ft_removefirst(p->nbl2, tmp);
	p->nbl1++;
	p->nbl2--;
	ft_option(p, "pa");
}

void	ft_pb(t_push *p)
{
	int	*tmp;

	tmp = p->l2;
	if (p->nbl1 == 0)
		return ;
	p->l2 = ft_addandalloc(p->nbl2 + 1, tmp, p->l1[p->nbl1 - 1]);
	tmp = p->l1;
	p->l1 = ft_removefirst(p->nbl1, tmp);
	p->nbl1--;
	p->nbl2++;
	ft_option(p, "pb");
}
