/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiorell <lfiorell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 18:57:52 by lfiorell          #+#    #+#             */
/*   Updated: 2024/07/19 18:57:55 by lfiorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 *  This function prints the character c to stdout.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
