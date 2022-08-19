/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverdood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:25:45 by tverdood          #+#    #+#             */
/*   Updated: 2022/05/26 18:25:53 by tverdood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*lst_max(t_list *head)
{
	int		n;
	t_list	*node;

	n = *(int *)head->content;
	node = head;
	while (head)
	{
		if (*(int *)head->content > n)
		{
			n = *(int *)head->content;
			node = head;
		}
		head = head->next;
	}
	return (node);
}
