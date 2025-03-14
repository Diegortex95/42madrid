/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:31:24 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/05 13:52:26 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a;
	a = 10;
	
	int	b;
	b = 5;
	
	int div; 
	int mod;

	ft_div_mod (a , b, &div, &mod);
	printf("%d %d\n", div, mod);
	return (0);
}*/
