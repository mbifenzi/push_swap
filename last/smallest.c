/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:30:25 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/09/20 16:54:11 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int     smallest_b_instr(t_data stack, int index_b)
// {
//     int moyenne;

//     moyenne = *stack.len_b/2;
//     if (index_b > moyenne)
//         return(-1);
//     else 
//         return (1);
// }
// int     smallest_a_instr(t_data stack, int index_a)
// {
//     int moyenne;

//     moyenne = *stack.len_a/2;
//     if (index_a > moyenne)
//         return(-1);
//     else
//         return (1);
// }
// int     dig_num(int *c)
// {
//     int i = 0;

//     while (c[i])
//         i++;
//     //i--;
//     return i;
// }
// int ft_check_sort_b(t_data stack,int *sorted, int index_b, int pos)
// {
//     int i = 0;
//     len = 0;
//     while (i < *stack.len_b - 1 && pos < )
//     {
//         if (stack.b[i] == sorted[pos])
//             pos++;
//         i++;
//     }

//     return 0;
// }
// int     smallest_a_index(t_data stack, int index_b, int *sorted)
// {
//     int i = 0;
//     int pos;
//     int j = 1;
//     int swap = 1;
//     int len = dig_num(sorted);
//     pos = ft_check_pos(stack.b[index_b], sorted);
//     int new_pos = ft_check_pos_b(stack, sorted, index_b, pos);
//     //printf(" strleen = %d\n",len);
    
//     if (pos == 0)
//     {
        
//     }
//     else if (pos + j == len)
//     {
//         return (*stack.len_a);
//     }
//     else
//     {
//         while (i < *stack.len_a)
//         {
//             printf("-----------%d\n",j);
//            if (sorted[pos + j] == stack.a[i])
//                 return( pos + j);
//             else
//                 i++;
//             if (swap == 1 && i == *stack.len_a + 1)
//             {
//                 i = 0;
//                 j++;
//             }
//             if (pos + j == *stack.len_a)
//             {
//                 swap = -1;
//                 j--; 
//             }
//         }
//     }
//     return 0;
// }
// int     b_to_a(t_data stack, int a, int b, int inst_a, int inst_b)
// {
//     int j;

//     j = 0;
//     if (inst_b == -1 && inst_a == -1)
//     {
        
//         while (a > 0 && b > 0)
//         {
//             rrr_instruction(stack);
//             a--;
//             b--;
//         }
        
//         while (a > 0)
//         {
            
//             rra_instruction(stack, j);
//             a--;
//         }
//         while (b > 0)
//         {
//             rrb_instruction(stack, j);
//             b--;
//         }
//     }
//     else if (inst_b == 1 && inst_a == 1)
//     {
//         while (a > 0 && b > 0)
//         {
//         rr_instruction(stack);
//         a--;
//         b--;
//         }
//         while (a > 0)
//         {
//             ra_instruction(stack, j);
//             a--;
//         }
//         while (b > 0)
//         {
//             rb_instruction(stack, j);
//             b--;
//         }
//     }
//     else if (inst_b == 1 && inst_a == -1)
//     {
//         //printf("stack a =%d --- index a = %d\n",stack.b[b], a);
//         while (a > 0)
//         {
//             rra_instruction(stack, j);
//             a--;
//         }
//         while (b > 0)
//         {
//             rb_instruction(stack, j);
//             b--;
//         }
//     }
//     else if (inst_b == -1 && inst_a == 1)
//     {
//         while (a > 0)
//         {
//             ra_instruction(stack, j);
//             a--;
//         }
//         while (b > 0)
//         {
//             rrb_instruction(stack, j);
//             b--;
//         }
//     }
//     return 0;
// }