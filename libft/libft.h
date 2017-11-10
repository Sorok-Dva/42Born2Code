/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:27:43 by lgarcia           #+#    #+#             */
/*   Updated: 2017/11/10 17:27:52 by lgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 100
# define MALLCHECK(x) if (!x) return (-1);
# define IS_SPACE(x) (x == ' ' || x == '\t' || x == '\r' || x = '\f')

void    ft_putchar(char c);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr(char const *str);
void    ft_putendl(char const *str);
void    ft_putnbr(int nbr);
void        ft_putnbr_fd(int n, int fd);

size_t    ft_strlen(const char *s);

#endif
