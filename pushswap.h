/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 15:30:29 by evoisin           #+#    #+#             */
/*   Updated: 2015/01/28 15:43:49 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft.h"

typedef struct		s_push
{
	int				*l1;
	int				*l2;
	int				nb;
	int				nbl1;
	int				nbl2;
	int				min;
	char			*parcours;
	int				option;
	int				blop;
}					t_push;

int					ft_isrange(int *tab, int nb);
void				ft_sa(t_push *p);
void				ft_sb(t_push *p);
void				ft_ss(t_push *p);
int					*ft_removefirst(int size, int *tmp);
int					*ft_addandalloc(int size, int *tmp, int add);
void				ft_ra(t_push *p);
void				ft_rb(t_push *p);
void				ft_rra(t_push *p);
void				ft_rrb(t_push *p);
void				ft_pa(t_push *p);
void				ft_pb(t_push *p);
void				ft_rangetab(t_push *p);
void				ft_afftab(int *tab, int size, int i);
void				ft_option(t_push *p, char *str);

#endif
