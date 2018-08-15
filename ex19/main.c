/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clingier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 17:47:03 by clingier          #+#    #+#             */
/*   Updated: 2018/08/15 18:10:23 by clingier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *str1, char *str2, int n);

int 	main(void){
	char str1[] = "aaa";
	char str2[] = "Test";
	char str1[] = "aaa";
	char str2[] = "Test";
	printf("%d\n", ft_strlcpy(str1, str2, 2));
	printf("%lu\n", strlcpy(str1, str2, 2));
	return 0;
}
