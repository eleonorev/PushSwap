/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 15:47:44 by evoisin           #+#    #+#             */
/*   Updated: 2015/01/29 15:47:46 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rra(t_push *p)
{
	int	i;
	int var;

	i = 0;
	var = p->l1[0];
	while (i < p->nbl1 - 1)
	{
		p->l1[i] = p->l1[i + 1];
		i++;
	}
	p->l1[i] = var;
	ft_option(p, "rra");
}

void	ft_rrb(t_push *p)
{
	int	i;
	int var;

	i = 0;
	var = p->l2[0];
	while (i < p->nbl2 - 1)
	{
		p->l2[i] = p->l2[i + 1];
		i++;
	}
	p->l2[i] = var;
	ft_option(p, "rrb");
}

void	ft_ra(t_push *p)
{
	int	i;
	int	var;

	i = p->nbl1;
	var = p->l1[p->nbl1 - 1];
	while (i > 0)
	{
		p->l1[i] = p->l1[i - 1];
		i--;
	}
	p->l1[0] = var;
	ft_option(p, "ra");
}

void	ft_rb(t_push *p)
{
	int	i;
	int	var;

	i = p->nbl2;
	var = p->l2[p->nbl2 - 1];
	while (i > 0)
	{
		p->l2[i] = p->l2[i - 1];
		i--;
	}
	p->l2[0] = var;
	ft_option(p, "rb");
}
