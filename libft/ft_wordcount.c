/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jluknar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:49:55 by jluknar-          #+#    #+#             */
/*   Updated: 2019/11/11 16:05:27 by jluknar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	int count;

	count = 0;
	if (*s == '\0')
		return (0);
	s++;
	if (*s == '\0' && *(s - 1) != c)
		return (1);
	while (*s)
	{
		if ((*(s - 1) != c && *s == c))
			count++;
		s++;
	}
	if (*(s - 1) != c)
		count++;
	return (count);
}
