/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:01:50 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/07 12:41:35 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str [count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int	main(void)
{
	char	*str = "me duele la cabeza, primo";

	int length = ft_strlen(str);
	printf("%d", length);
	return (0);
}*/
