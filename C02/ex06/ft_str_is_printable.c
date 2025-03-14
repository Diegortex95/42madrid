/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegolop <diegolop@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:12:33 by diegolop          #+#    #+#             */
/*   Updated: 2025/03/12 12:16:17 by diegolop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	 main(void)
{
	char	str[] = ""; 			//1//
	char    str1[] = ";';/.';'[";		//1//
	char    str2[] = "M'Eeh12";		//1//
	char    str3[] = "	";		//0//

	printf("test:%d\n", ft_str_is_printable(str));
	printf("test1:%d\n", ft_str_is_printable(str1));
	printf("test2:%d\n", ft_str_is_printable(str2));
	printf("test3:%d\n", ft_str_is_printable(str3));
	return (0);
}*/
