/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:57:30 by apereira          #+#    #+#             */
/*   Updated: 2022/11/04 14:02:41 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It creates a new list element.
 * 
 * @param content The content to put in the new element.
 * 
 * @return A pointer to a new list element.
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!content)
		return (0);
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
