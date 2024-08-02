/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiorell <lfiorell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:42:22 by lfiorell          #+#    #+#             */
/*   Updated: 2024/08/01 17:20:34 by lfiorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"
#include "io/fs/chunk.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * @brief Load a chunk of data from a file.
 *
 * This function opens the file specified by `path`
 *  and reads the first chunk of data into the
 * `str` field of the `s_str_chunk` structure. If the
 *  file cannot be opened or read, an error
 * message is printed and the program exits. If the
 *  end of the file is reached or the number of
 * bytes read is less than `CHUNK_SIZE`, the `end`
 *  field of the structure is set to 1.
 *
 * @param path The path to the file to be opened.
 * @return The `s_str_chunk` structure containing
 *  the file descriptor, the data read, and the end flag.
 */
struct s_str_chunk	ft_str_chunk_load(char *path)
{
	struct s_str_chunk	chunk;
	int					result;

	chunk.fd = open(path, O_RDONLY);
	if (chunk.fd < 0)
	{
		ft_eprintln("Cannot open file.");
		_exit(1);
	}
	chunk.end = 0;
	result = read(chunk.fd, chunk.str, CHUNK_SIZE);
	if (result < 0)
	{
		ft_eprintln("Cannot read file.");
		_exit(1);
	}
	else if (result < CHUNK_SIZE)
	{
		while (result < CHUNK_SIZE)
			chunk.str[result++] = 0;
		chunk.end = 1;
	}
	return (chunk);
}

/**
 * @brief Read the next chunk of data from a file.
 *
 * This function reads the next chunk of data from
 *  the file associated with the `fd` field of the
 * `s_str_chunk` structure and stores it in the
 *  `str` field. If the file cannot be read, an error
 * message is printed and the program exits. If the
 *  end of the file is reached, the `end` field
 * of the structure is set to 1.
 *
 * @param chunk The `s_str_chunk` structure
 *  containing the file descriptor and the data read.
 * @return The updated `s_str_chunk` structure
 *  containing the data read and the end flag.
 */
struct s_str_chunk	ft_str_chunk_next(struct s_str_chunk chunk)
{
	int	result;

	result = read(chunk.fd, chunk.str, CHUNK_SIZE);
	if (result < 0)
	{
		ft_eprintln("Cannot read file.");
		_exit(1);
	}
	else if (result == 0)
		chunk.end = 1;
	else if (result < CHUNK_SIZE)
	{
		while (result < CHUNK_SIZE)
			chunk.str[result++] = 0;
		chunk.end = 1;
	}
	return (chunk);
}
