/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 11:11:51 by thifranc          #+#    #+#             */
/*   Updated: 2016/04/17 15:54:50 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

/* cflag code is short = 0000 0000 Rlih rtfa*/

int		get_opt(char *s)
{
	int		out;
	int		i;

	out = 0;
	i = 0;
	if (!s || s[0] != '-')
		return (out);
	i++;
	while (s[i] && (ft_get_char("craRtflih", s[i]) != -1))
	{
		if (s[i] == 'a')
			out = out | OPT_A;
		else if (s[i] == 'f')
			out = out | OPT_F;
		else if (s[i] == 't')
			out = out | OPT_T;
		else if (s[i] == 'r')
			out = out | OPT_R;
		else if (s[i] == 'h')
			out = out | OPT_H;
		else if (s[i] == 'i')
			out = out | OPT_I;
		else if (s[i] == 'l')
			out = out | OPT_L;
		else if (s[i] == 'R')
			out = out | OPT_RCUR;
		else if (s[i] == 'c')
			out = out | OPT_C;
		else if (s[i] == 'b')
			out = out | OPT_B;
		i++;
	}
	if (!s[i])
		return (out);
	return (out);
	//else return illegal option;
}
