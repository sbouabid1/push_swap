/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:31:57 by sbouabid          #+#    #+#             */
/*   Updated: 2023/12/26 09:35:25 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*ft_create_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->x = value;
	node->next = NULL;
	return (node);
}

void	ft_push(t_stack **stack, t_stack *node)
{
	t_stack	*curr;

	if (*stack == NULL)
		*stack = node;
	else
	{
		curr = *stack;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node;
	}
}

// int	ft_strlen(char	*str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }
 
int	ft_strcmp(char	*s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}