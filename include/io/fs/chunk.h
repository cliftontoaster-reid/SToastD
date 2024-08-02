/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiorell <lfiorell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:37:11 by lfiorell          #+#    #+#             */
/*   Updated: 2024/08/01 16:20:49 by lfiorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CHUNK_SIZE 1024

/**
 * @struct s_str_chunk
 * @brief  A structure to handle chunks of strings.
 *
 * This structure is used to manage chunks of strings efficiently.
 * Each chunk contains a fixed-size string buffer,
 * an end flag, and a file descriptor.
 * The string buffer has a size defined by the CHUNK_SIZE macro.
 * The end flag indicates whether the end of the string has been reached.
 * The file descriptor is used for file operations.
 */
struct		s_str_chunk
{
	/**
	 * @var str
	 * @brief A fixed-size string buffer.
	 *
	 * This character array is used to store a chunk of a string.
	 * The size of the buffer is defined by the CHUNK_SIZE macro.
	 */
	char	str[CHUNK_SIZE];

	/**
	 * @var end
	 * @brief An end flag.
	 *
	 * This integer variable is used to indicate whether the end
     * of the string has been reached.
	 * The value of this variable is not specified.
	 */
	int		end;

	/**
	 * @var fd
	 * @brief A file descriptor.
	 *
	 * This integer variable is used for file operations.
	 * The value of this variable is not specified.
	 */
	int		fd;
};

struct s_str_chunk	ft_str_chunk_load(char *path);

struct s_str_chunk	ft_str_chunk_next(struct s_str_chunk chunk);