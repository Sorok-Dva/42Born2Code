/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:10:42 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/08 13:13:14 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int i;

	i = 0;
	while (i < lenght)
	{
		f(tab[i]);
		i++;
	}
}