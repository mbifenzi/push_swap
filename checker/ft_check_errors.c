/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:08:04 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/04/14 14:48:47 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void    ft_check_numbers(char **argv)
{
    int i;
    int j;
    long a;

    i = 1;
    while (argv[i])
    {
        j = 0;
        if (argv[i][0] == '-')
            j++;
        while (argv[i][j])
        {
            if(!ft_isdigit((argv[i][j])))
                ft_error("NOT INTEGER");
            j++;
        }
        a = ft_atoi(argv[i]);
        if (a > INT32_MAX || a < INT32_MIN)
            ft_error("NOT INTEGER");
        i++;
    }
}

void    ft_check_duplicate(t_data stack)
{
    int i;
    int j ;

    j = 0;
    i = 0;
    while (stack.a[i])
    {
        j = 0;
        while (stack.a[j])
        {
            if (stack.a[i] == stack.a[j] && j != i)
                ft_error("error");
            j++;
        }
        i++;
    }
}

int     ft_check_sort(t_data stack, int len)
{
    int before;
    if (*stack.len_a == 0)
        ft_error("KO"); 
    while(len)
    {
        before = len - 1;
        if(stack.a[len] > stack.a[before])
            len--;
        if(stack.a[len] < stack.a[before])
            return(ft_error("KO"));
    }
    if (len == 0)
        ft_success("OK");
    return(0);
}