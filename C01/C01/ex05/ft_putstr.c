/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:21:05 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/09 17:07:58 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	char	str[] = "me gusta estar en 42madrid";

	ft_putstr (str);
	return (0);
}*/
