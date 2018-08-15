/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:26:15 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 13:34:43 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_char(char a, char b, char c)
{
	if (a >= b && a <= c)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (check_char(s[i], 'a', 'z') || check_char(s[i], 'A', 'Z'))
		{
			if (check_char(s[i - 1], 'A', 'Z') || check_char(s[i - 1], 'a', 'z')
					|| check_char(s[i - 1], '0', '9'))
			{
				if (check_char(s[i], 'A', 'Z'))
					s[i] += 32;
			}
			else
			{
				if (check_char(s[i], 'a', 'z'))
					s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
