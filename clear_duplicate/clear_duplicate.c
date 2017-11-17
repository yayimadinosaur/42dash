/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:46:15 by wfung             #+#    #+#             */
/*   Updated: 2017/02/09 16:20:15 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef	struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

t_list	clear_duplicate(t_list *begin)
{
	t_list	*current;
	t_list	*tmp;

	current = begin;
	tmp = current->next;
	while (current != '\0')
	{
		if (current->data > tmp->data)
			current = current->next;
		else if (current->data == tmp->data)
			current->next = tmp->next;
	}
	return (begin);
}

voidd	print_list(t_list *x)
{
	while (x != '\0')
	{
	}
}

int		main(void)
{
	t_list	*x;
	t_list	*y;

	int	n[4] = {4, 3, 4, 1};
	x = (t_list*)malloc(sizeof(t_list));
	x->n = &n[0];
	x->next= (t_list*)malloc(sizeof(t_list));
	x->next->n = &n[1];
	x->next->next = (t_list*)malloc(sizeof(t_list));
	x->next->next->n = &n[2];
	x->next->next->next = (t_list*)malloc(sizeof(t_list));
	x->next->next->nextn = &n[3];
}
