/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:08:04 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/10/12 01:29:33 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_error(char *error)
{
	int	i;

	i = 0;
	while (error[i])
	{
		write(1, &error[i], 1);
		i++;
	}
	exit(0);
	return (1);
}

int	ft_check_sort(t_data *stack)
{
	int	before;
	int	len;

	len = stack->len_a - 1;
	if (stack->len_b != 0)
		return (ft_error("KO\n"));
	while (len)
	{
		before = len - 1;
		if (stack->a[len] > stack->a[before])
			len--;
		if (stack->a[len] < stack->a[before])
			return (ft_error("KO\n"));
	}
	if (len == 0)
		return (ft_success("OK\n"));
	return (0);
}
