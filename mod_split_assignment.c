/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mod_split_assignment.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 19:24:19 by smhah             #+#    #+#             */
/*   Updated: 2021/06/06 10:13:13 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_shell.h"

int	alloc_1(char ***tab1, int casee)
{
	*tab1 = (char **)m_malloc(sizeof(char *) * (casee + 1) + 100);
	if (!tab1)
		return (0);
	return (1);
}

int	alloc_2(char **tab1, int i, int len)
{
	tab1[i] = (char *)m_malloc(sizeof(char) * (len + 100));
	if (!tab1[i])
		return (0);
	return (1);
}

int 	calcule_len(int *len, char *s, char c, int *p)
{
	*len = ft_countlen(s, c, p);
	return (*len);
}
