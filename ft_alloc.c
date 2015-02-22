/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 15:07:13 by evoisin           #+#    #+#             */
/*   Updated: 2015/01/29 15:07:16 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		*ft_addandalloc(int size, int *tmp, int add)
{
	int	*newtab;
	int	i;

	i = 0;
	if (!(newtab = (int *)malloc(sizeof(int) * size + 1)))
		return (0);
	while (i != size - 1)
	{
		newtab[i] = tmp[i];
		i++;
	}
	newtab[i] = add;
	return (newtab);
}

int		*ft_removefirst(int size, int *tmp)
{
	int	*newtab;
	int	i;

	i = 0;
	if (!(newtab = (int *)malloc(sizeof(int) * size - 1)))
		return (0);
	while (i < size)
	{
		newtab[i] = tmp[i];
		i++;
	}
	return (newtab);
}

void	ft_option(t_push *p, char *str)
{
	if (p->blop && !p->option)
		ft_putchar(' ');
	if (!p->option)
		ft_putstr(str);
	p->blop++;
	if (!p->option)
		return ;
	ft_putcolor(str, "\033[4;35m");
	ft_putcolor(" :\n", "\033[4;35m");
	ft_afftab(p->l1, p->nbl1, 1);
	ft_afftab(p->l2, p->nbl2, 2);
}
