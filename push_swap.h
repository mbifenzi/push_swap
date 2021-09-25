/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <mbifenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:09:12 by mbifenzi          #+#    #+#             */
/*   Updated: 2021/09/25 16:26:44 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <ctype.h>
# include <limits.h>

# define MINA 0
# define MAXA 1
# define LENA 2
# define LENB 3
# define NBA 4
# define NBB 5
# define NBAB 6
# define FROMUPA 7
# define FROMUPB 8
# define NBRINSA 9
# define NBRINSB 10
# define NBRINSAB 11
# define UPA 12
# define UPB 13
# define MAXIM INT_MAX



typedef struct	s_data
{
	int     *a;
    int     *index;
    int     *b;
    char    *inst;
    int     len_a;
    int     len_b;
    int     max_len;
    int     *sorted;
}           t_data;


/*gnl functions*/
int		    ft_finish(char **str, char **line);
int		    ft_remplissage(char **str, char **line, int len);
int		    ft_read(int fd, char **str);
int		    get_next_line(int fd, char **line);
char	    *ft_strdup(const char *s);
char	    *ft_substr(char const *s, unsigned int start, size_t len);
char	    *ft_strjoin(char const *s1, char const *s2);
char	    *ft_strchr(const char *s, int c);
/*checker*/
long		ft_atoi(const char *str);
int         ft_error(char *error);
int         ft_success(char *success);
size_t	    ft_strlen(const char *str);
int		    ft_strcmp(const char *s1, const char *s2);
//void        ft_allocate(t_data stack, , int argc);
int         ft_instructions(t_data stack);         
int         ft_free(t_data *stack);
int		    ft_isdigit(char c);
int         ft_check_number(char *str);
int         ft_check_duplicate(int ac, char **av);
int         ft_check_sort(t_data *stack);
void         ft_read_arguments(t_data *stack, char **argv);
int         check_overflow(char *str);
long long	ft_overflowhelper(char *str);

/*instructions*/
void         pa_instruction(t_data *stack);
int          pb_instruction(t_data *stack);

void         sa_instruction(t_data *stack, int l);
void         sb_instruction(t_data *stack, int l);
void         ss_instruction(t_data *stack);
void         rra_instruction(t_data *stack, int k);
void         rrb_instruction(t_data *stack, int k);
void         rrr_instruction(t_data *stack);
void         ra_instruction(t_data *stack, int j);
void         rb_instruction(t_data *stack, int j);
void         rr_instruction(t_data *stack);
//

// split
// static int		ft_hm(char const *s, char c);
// static char		**ft_mal(char **strs, char const *s, char c);
// static char		**ft_cpy(char **strs, char const *s, char c);
// char			**ft_split(char const *s, char c);
int     ft_execute_sort(t_data *stack);
void    ft_sort_table(t_data *stack);
int     ft_check_placements(t_data *stack);
int     smallest_b_instr(t_data *stack, int index_b);
int     smallest_a_instr(t_data *stack, int index_a);
int     smallest_a_index(t_data *stack, int index_b);
//int     b_to_a(t_data *stack, int a, int b, int inst_a, int inst_b);
int     ft_check_pos(int c, int *sorted);
void    b_to_a(t_data *stack, int *data);
void    b_to_a2(t_data *stack, int *data);
void    b_to_a3(t_data *stack, int *data);
void    b_to_a4(t_data *stack, int *data);


#endif