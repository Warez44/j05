/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:01:41 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 13:28:58 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *s)
{
	char *s1;

	s1 = s;
	while (*s1 != '\0')
	{
		if (*s1 >= 'a' && *s1 <= 'z')
			*s1 -= 32;
		s1++;
	}
	return (s);
}
