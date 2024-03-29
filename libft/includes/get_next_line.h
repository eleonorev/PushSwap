/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 15:37:17 by evoisin           #+#    #+#             */
/*   Updated: 2014/09/28 18:22:59 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1024
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>

int					get_next_line(int const fd, char **line);

#endif
