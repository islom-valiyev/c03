/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:08:26 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/20 20:41:13 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	while (j < nb && src [j] != '\0')
	{
		dest [i + j] = src [j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char src[] = " hello";
	char dest[] = "42";
	printf("%s", ft_strncat(dest, src, 7));
}*/
