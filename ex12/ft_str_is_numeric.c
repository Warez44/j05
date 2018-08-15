/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:18:09 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 14:02:00 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *s)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			ret = 0;
		i++;
	}
	if (s[0] == '\0')
		ret = 1;
	return (ret);
}
