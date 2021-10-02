/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:12:48 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/10/02 19:36:21 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa_instruction(t_data *stack)
{
	int	tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
}

void	sb_instruction(t_data *stack)
{
	int	tmp;

	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
}

int	ft_read_instructions(t_data *stack)
{
	while (get_next_line(0, &stack->inst) > 0)
	{
		ft_instructions(stack);
	// 	int j = 0;
	// while (j < stack->len_a)
	// {
	// 	printf("stack a - - - - - - >%d\n", stack->a[j]);
	// 	j++;
	// }
	// j = 0;
	// while (j < stack->len_b)
	// {
	// 	printf("stack b - ---------==%d\n", stack->b[j]);
	// 	j++;
	// }
		free(stack->inst);
		stack->inst = NULL;
	}
	free(stack->inst);
	stack->inst = NULL;
	return (1);
}

int	ft_instructions(t_data *stack)
{
	int i;

	i = 0;
	if (ft_strcmp(stack->inst, "sa") == 0 || ft_strcmp(stack->inst, "sb") == 0
		||ft_strcmp(stack->inst, "ss") == 0)
		ss_instruction(stack);
	else if (ft_strcmp(stack->inst, "pa") == 0)
		pa_instruction(stack);
	else if (ft_strcmp(stack->inst, "pb") == 0)
		pb_instruction(stack);
	else if (ft_strcmp(stack->inst, "ra") == 0
		|| ft_strcmp(stack->inst, "rb") == 0 || ft_strcmp(stack->inst, "rr") == 0)
		rr_instruction(stack);
	else if (ft_strcmp(stack->inst, "rra") == 0
		|| ft_strcmp(stack->inst, "rrb") == 0
		|| ft_strcmp(stack->inst, "rrr") == 0)
		rrr_instruction(stack);
	else if (ft_strcmp(stack->inst, "\n") == 0 || ft_strcmp(stack->inst, "\0") == 0)
		ft_success("SUCCESS\n");
	else
		ft_error("\nINVALID INSTRUCTION \n");
	i++;
	return (1);
}
