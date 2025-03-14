/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:24 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/11 16:17:27 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "mitocondria";
	char	str1[] = "";
	char	str2[] = "SONNE";
	
	ft_str_is_lowercase(str);
	printf("test:%d\n", ft_str_is_lowercase(str));
	printf("test1:%d\n", ft_str_is_lowercase(str1));
	printf("test2:%d\n", ft_str_is_lowercase(str2));
	return (0);
}*/
