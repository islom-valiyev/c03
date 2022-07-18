/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 18:30:15 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/23 23:18:38 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest [i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src [j] != '\0')
	{
		dest [i] = src [j];
		i++;
		j++;
	}
	dest [i] = '\0';
	return (dest);
}
/*int	main()
{
	char src[] = "Benguerir";
	char dest[] = "1337 ";
	printf("%s", ft_strcat(dest, src));
}*/
