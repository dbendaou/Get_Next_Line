/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 19:48:02 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/20 19:50:12 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(int const fd, char ** line)
{
	char buf[BUF_SIZE + 1];

	while (read(fd, buf, BUF_SIZE))
	{

	}
}
