/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <dbendaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 19:48:02 by dbendaou          #+#    #+#             */
/*   Updated: 2016/01/11 18:16:05 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_next_n(char const **str)
{
	int i;

	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	return ((str[i] == '\n') ? i + 1 : 0);
}

int		get_next_line(int const fd, char ** line)
{
	char buf[BUF_SIZE + 1];
	static int i = 0;
	int j;

	j = 0;
	if (str = malloc(sizeof(char) * BUF_SIZE))
	while (buff[i] && buff[i] != '\0' && n < buf)
	{
		read(fd, buf, BUF_SIZE);
		printf("wesh alors \n");
	}
}
