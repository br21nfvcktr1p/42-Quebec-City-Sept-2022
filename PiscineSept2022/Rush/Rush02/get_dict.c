/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjean-ra <fjean-ra@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:49:46 by fjean-ra          #+#    #+#             */
/*   Updated: 2022/10/02 19:29:17 by fjean-ra          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>

char	*get_dict(char *dict_path)
{
	int		fd;
	int		count;
	char	*buf;

	count = 2000000000;
	buf = malloc(count * sizeof(char));
	fd = open(dict_path, O_RDONLY);
	read(fd, buf, count);
	close(fd);
	return (buf);
}