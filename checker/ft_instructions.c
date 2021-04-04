/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.inst[i]s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 17:12:48 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/04/03 17:46:59 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int     ss_instruction(t_data stack, int i)
{
    int tmp;

    if(ft_strcmp(stack.inst[i], "sa") == 0 || ft_strcmp(stack.inst[i], "ss") == 0)
    {
        tmp = stack.a[0];
        stack.a[0] = stack.a[1];
        stack.a[1] = tmp;
    }
    if(ft_strcmp(stack.inst[i], "sb") == 0 || ft_strcmp(stack.inst[i], "ss") == 0)
    {
        tmp = stack.b[0];
        stack.b[0] = stack.b[1];
        stack.b[1] = tmp;
    }
    return(1);
}
int     ft_instructions(t_data stack, int len)
{
    int i;
    int *tmp;
    int len2;
    len2 = len;
    i = 0;
    //printf("|%s|\n", stack.inst[0]);
    tmp = malloc(sizeof(int) * len);
    while (stack.inst[i])
    {
        if(ft_strcmp(stack.inst[i], "sa") == 0 || ft_strcmp(stack.inst[i], "sb") == 0 ||
           ft_strcmp(stack.inst[i], "ss") == 0)
            ss_instruction(stack, i);
        else if(ft_strcmp(stack.inst[i], "pa") == 0)
        {
            tmp[0] = stack.a[0];
            stack.a[0] = stack.b[0];
            stack.b[0] = tmp[0];
            free(tmp);
        }
        else if(ft_strcmp(stack.inst[i], "pb") == 0)
        {
            tmp[0] = stack.b[0];
            stack.b[0] = stack.a[0];
            stack.a[0] = tmp[0];
            free(tmp);
        }
        // else if(ft_strcmp(stack.inst[i], "ra") == 0)
        // {
        //     printf("before|%d|\n", stack.a[len]);
        //     tmp[0] = stack.a[0];
        //     while(len2 > 0)
        //     {
        //         stack.a[len - len2] = stack.a[len - len2 + 1];
        //         tmp[len - len2 + 1] = stack.a[len - len2 + 2];
        //         len2--;
        //     }
        //     stack.a[len] = tmp[0];
        //     printf("after|%d|\n", stack.a[len]);
        // }
        else if(ft_strcmp(stack.inst[i], "rb") == 0)
        {
            printf("success");
        }
        else if(ft_strcmp(stack.inst[i], "rr") == 0)
        {
            printf("success");
        }
        else if(ft_strcmp(stack.inst[i], "rra") == 0)
        {
            printf("success");
        }
        else if(ft_strcmp(stack.inst[i], "rrb") == 0)
        {
            printf("success");
        }
        else if(ft_strcmp(stack.inst[i], "rrr") == 0)
        {
            printf("success");
        }
        else if(ft_strcmp(stack.inst[i], "\n") == 0 || ft_strcmp(stack.inst[i], "\0") == 0 )
        {
            printf("success");
        }
        else
            ft_error("\nINVALID INSTRUCTION \n");
        i++;
    }

    //printf("after->|%d\n", stack_a[0]);
    return(1);
}