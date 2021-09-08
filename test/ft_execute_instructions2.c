/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_instructions2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:22:22 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/06/27 21:01:26 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_instruction(t_data stack, int len2, int j)
{
	
	int tmp;
	int i;
	i = 0;
	tmp = *stack.a;
	while(len2 > i)
	{
		stack.a[i] = stack.a[i + 1];
		i++;
	}
	stack.a[*stack.len_a] = tmp;
	if(j == 0)
		ft_success("ra\n");
}

void	rb_instruction(t_data stack, int len2, int j)
{
	int tmp;
	int i;
	i = 0;
	tmp = stack.b[0];	
	while(len2 > i)
	{
		stack.b[i] = stack.b[i + 1];
		i++;
	}
	stack.b[*stack.len_b] = tmp;
	if(j == 0)
		ft_success("rb\n");
	//printf("stack_len===>%d\n", stack.b[*stack.len_b]);
    //printf("stack_0===>%d\n", stack.b[0]);
}

void    rra_instruction(t_data stack, int len2, int k)
{
    int tmp;
    
    tmp = stack.a[*stack.len_a];

		while(len2 >= 0)
		{
			stack.a[len2] = stack.a[len2 - 1];
			len2--;
		}
		stack.a[0] = tmp;
	if(k == 0)
		ft_success("rra\n");
}

void    rrb_instruction(t_data stack, int len2, int k)
{
    int tmp;
    
    tmp = stack.b[*stack.len_b - 1];
	while(len2 > 0)
	{
		stack.b[len2] = stack.b[len2 - 1];
		len2--;
	}
	stack.b[0] = tmp;
	if(k == 0)
		ft_success("rrb\n");
}