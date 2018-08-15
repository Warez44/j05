/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:57:55 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 14:22:59 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int siz)
{
	char				*d;
	char				*s;
	unsigned int		n;

	s = src;
	d = dst;
	n = siz;
	if (n != 0)
	{
		while (n-- != 0)
			if ((*s = *d) == '\0')
				break ;
	}
	if (n == 0)
	{
		if (siz != 0)
			*d = '\0';
		while (*s++)
			;
	}
	return (s - src - 1);
}
