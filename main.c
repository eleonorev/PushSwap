/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 15:32:13 by evoisin           #+#    #+#             */
/*   Updated: 2015/01/28 18:16:50 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int				ft_error(void)
{
	ft_putcolor("Error", RED);
	ft_putchar('\n');
	exit (0);
	return (0);
}

static int		*filltab(char **arg, int ac, int stop)
{
	int			*tab;
	int			x;

	x = 0;
	tab = (int *)malloc(sizeof(int) * ac);
	while (ac > stop)
		tab[x++] = ft_atoi(arg[ac--]);
	return (tab);
}

static void		nooonpasdoublon(int *tab, int size)
{
	int			i;
	int			tmp;

	i = 0;
	tmp = 0;
	while (tmp < size)
	{
		i = 0;
		while (i < size)
		{
			if (i != tmp && tab[i] == tab[tmp])
				ft_error();
			i++;
		}
		tmp++;
	}
}

static void		verif(char **arg, t_push *p)
{
	int			x;

	if (ft_strcmp(arg[1], "-v") == 0)
		p->option = 1;
	x = p->option + 1;
	while (arg[x])
	{
		if (((ft_strcmp(arg[x], "0") != 0)) && (ft_strcmp(arg[x], "-0") != 0)
			&& ft_atoi(arg[x]) == 0)
			ft_error();
		x++;
	}
	p->nbl1 -= p->option;
	p->l1 = filltab(arg, p->nbl1 + p->option, p->option);
	nooonpasdoublon(p->l1, p->nbl1);
}

int				main(int ac, char **av)
{
	t_push		p;

	if (ac <= 2)
		ft_error();
	p.nb = ac - 1;
	p.nbl1 = p.nb;
	p.nbl2 = 0;
	p.blop = 0;
	p.option = 0;
	p.l1 = 0;
	p.l2 = 0;
	verif(av, &p);
	if (ft_isrange(p.l1, p.nb) == -1)
		return (0);
	ft_rangetab(&p);
	if (!p.option)
		ft_putchar('\n');
	return (0);
}
