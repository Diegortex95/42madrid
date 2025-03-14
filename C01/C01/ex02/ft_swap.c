/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:56:52 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/07 12:43:07 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)

{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*int	main(void)
{
	int	a;
	int	b;
	
	a = 4;
	b = 2;
	ft_swap(&a, &b);
	printf ("%i\n%i", a, b);
	return (0);
}*/
