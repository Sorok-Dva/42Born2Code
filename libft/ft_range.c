/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:49:07 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/08 12:49:12 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	*p;

	range = NULL;
	if (min >= max)
		return (range);
	range = malloc(sizeof(*range) * (max - min));
	p = range;
	while (min < max)
		*p++ = min++;
	return (range);
}
