/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:54:26 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/07 12:43:55 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	init;

	if (*b != 0)
	{
		init = *a;
		*a = init / *b;
		*b = init % *b;
	}
}

/*int	main(void)
{
	int a = 40;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/
