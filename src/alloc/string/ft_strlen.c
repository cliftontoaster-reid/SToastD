/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiorell <lfiorell@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:53:07 by lfiorell          #+#    #+#             */
/*   Updated: 2024/07/24 16:56:45 by lfiorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
#include <assert.h>
#include <stdio.h>

int	main(int argc, char *argv[]) {
  if (argc != 2) {
	printf("Needs 1 argument.\n\n");
	return (69);
  }
  printf("%d\n", ft_strlen(argv[1]));
  return (0);
}
*/
