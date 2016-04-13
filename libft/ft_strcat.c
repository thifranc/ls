/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thifranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/14 11:36:53 by thifranc          #+#    #+#             */
/*   Updated: 2016/02/20 16:28:18 by thifranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int i2;

	i = 0;
	i2 = 0;
	while (s1[i])
		i++;
	while (s2[i2])
	{
		s1[i] = s2[i2];
		i++;
		i2++;
	}
	s1[i] = 0;
	return (s1);
}
