/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <diegolop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 11:51:33 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/12 12:40:12 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "KLK";
	char    str1[] = "ArchiLaGO12";
	char	str2[] = "";
	char    str3[] = "reospeedwagon";

	printf("test:%d\n", ft_str_is_uppercase(str));
	printf("test1:%d\n", ft_str_is_uppercase(str1));
	printf("test2:%d\n", ft_str_is_uppercase(str2));
	printf("test3:%d\n", ft_str_is_uppercase(str3));
	return (0);
}*/
