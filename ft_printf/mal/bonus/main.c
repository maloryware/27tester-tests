/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:46:15 by Mal          #+#    #+#             */
/*   Updated: 2025/05/10 22:46:16 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

static void	title(char *title)
{
	printf("\n\n------------------\n");
	printf("Testing %s:", title);
	printf("\n------------------\n");
}

static void	lb(void)
{
	printf("|EOL\n");
}

static void check(int mine, int theirs)
{
	printf("|EOL\n\nmine: %d, theirs: %d", mine, theirs);
	if (mine == theirs)
		printf("\nno count diff! :D\n");
	else
		printf("\n--> DIFF DETECTED: %d\n", mine - theirs);
}

int	main()
{
	int		mine;
	int		theirs;

	void *ptr = malloc(3);
	// final //
	title("ft_printf FULL");
	mine = ft_printf("\nTests (mine): \ni - %2.15d\nc - %-3c\nh: %#.0x|%X\np: %p\ns: %13.4s\nu: %u\n%c: %%\n",
		128, '\200', 539, 539, ptr, "a string!", 429496729, '%');
	lb();
	theirs = printf("\nTests (they): \ni - %2.15d\nc - %-3c\nh: %#.0x|%X\np: %p\ns: %13.4s\nu: %u\n%c: %%\n",
		128, '\200', 539, 539, ptr, "a string!", 429496729, '%');
	check(mine, theirs);
	free(ptr);
	printf("\n");
}
