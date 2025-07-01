/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:36:02 by Mal               #+#    #+#             */
/*   Updated: 2025/07/01 17:42:22 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main()
{
	char *line;
	int		fd;
	int 	count;

	fd = open("main.c", O_RDONLY);
	line = get_next_line(fd);
	count = 0;
	while (line)
	{
		count++;
		printf("[%03d]: %s", count, line);
		line = get_next_line(fd);
	}
	printf("\n");
}
