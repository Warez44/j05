/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 20:06:34 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 14:09:09 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	while (s2[i])
		i++;
	while (j < n && s1[j] != '\0')
	{
		j++;
	}
	return (j + i);
}
