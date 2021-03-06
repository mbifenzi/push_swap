/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:13:42 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/10/02 19:23:15 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[j] != '\0'
		&& ((unsigned char *)s1)[i] == ((unsigned char *)s2)[j])
	{
		i++;
		j++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[j]);
}
