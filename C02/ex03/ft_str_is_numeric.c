/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:08:28 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/09 17:35:09 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (!(src[i] >= '0' && src[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)

{
	char src[] = "Ho1a"; //aqui tiene un 1 en vez de una l 

	printf("%d\n", ft_str_is_numeric(src));
	return(0);
}*/
