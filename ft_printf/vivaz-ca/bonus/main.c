/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mal <malory@onenetbeyond.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:25:44 by Mal               #+#    #+#             */
/*   Updated: 2025/06/13 22:35:18 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	check(int mine, int theirs)
{
	printf("theirs: %d, mine: %d\n\n", theirs, mine);
	if (mine == theirs)
		printf("no count diff! :D\n\n\n");
	else
		printf("--> DIFF DETECTED: %d\n\n\n", mine - theirs);
}

int main()
{
	char *var = "Sphynx of black quartz, judge my vow.";
	int vini_gostoso = 14;
	int mine;
	int theirs;

	printf("testing fucking -");
	theirs = printf("\n\n%s!!!\n", var);
	mine = ft_printf("\n\n%s!!!\n", var);
	check(mine, theirs);

	printf("\ntesting fucking +\n\n");
	theirs = printf("%+d\n", vini_gostoso);
	mine = ft_printf("%+d\n", vini_gostoso);
	check(mine, theirs);

	printf("\ntesting fucking ' '\n\n");
	theirs = printf("%-+13.5d\n", vini_gostoso);
	mine = ft_printf("%-+13.5d\n", vini_gostoso);
	check(mine, theirs);
	theirs = printf("% -43.25d\n", vini_gostoso);
	mine = ft_printf("% -43.25d\n", vini_gostoso);
	check(mine, theirs);

	unsigned int hashitagui = 3e8;
	printf("\n #\n\n");
	theirs = printf("%#x\n", hashitagui);
	mine = ft_printf("%#x\n", hashitagui);
	check(mine, theirs);

	printf("Obrigado vini por me ajudar tenho muita dificuldade :D <3 nya~\n");
}

