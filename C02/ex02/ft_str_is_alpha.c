/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:27:18 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/12 12:39:29 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)

{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a') && (str[i] <= 'z')))
		{
			if (!((str[i] >= 'A') && (str[i] <= 'Z')))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*int	main(void)

{
	char 	str[] = "easypeasylemonsqueezy";
	char	str1[] = "HOLAMUNDO";
	char	str2[] = "1234567867";
	char	str3[] = "";

	printf("test:%d\n", ft_str_is_alpha(str));
	printf("test1:%d\n", ft_str_is_alpha(str1));
	printf("test2:%d\n", ft_str_is_alpha(str2));
	printf("test3:%d\n", ft_str_is_alpha(str3));
	return(0);
}*/
