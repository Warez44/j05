/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:01:08 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 14:08:20 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *s1, char *s2, int n)
{
	char *s;
	int i;

	i = 0;
	s = s1;
	while(*s1)
		s1++;
	while (i < n)
	{
		if((*s1++ = *s2++) == 0)
			break ;
		i++;
	}
	*s1 = '\0';
	return (s);
}
