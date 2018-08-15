/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:06:27 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 13:23:05 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *sub)
{
	char *s1;
	char *s2;

	s2 = sub;
	if (s2 == '\0')
		return (str);
	while (str++ != 0)
	{
		s1 = str;
		if (*str != *sub)
			continue;
		while (1)
		{
			if (*s2 == 0)
				return (str);
			if (*s1++ != *s2++)
				break ;
		}
		s2 = sub;
	}
	return ("\0");
}
