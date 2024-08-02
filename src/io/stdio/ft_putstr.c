/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiorell <lfiorell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:32:09 by lfiorell          #+#    #+#             */
/*   Updated: 2024/08/01 15:59:58 by lfiorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"
#include <unistd.h>

void	ft_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

void	ft_eprint(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(2, str, len);
}

void	ft_println(char *str)
{
	ft_print(str);
	write(1, "\n", 1);
}

void	ft_eprintln(char *str)
{
	ft_eprint(str);
	write(1, "\n", 1);
}
