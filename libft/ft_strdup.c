/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apereira <apereira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:42:44 by apereira          #+#    #+#             */
/*   Updated: 2022/10/27 15:39:59 by apereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*g;
	int		i;

	i = 0;
	g = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!g)
		return (NULL);
	while (s[i])
	{
		g[i] = s[i];
		i++;
	}
	g[i] = '\0';
	return (g);
}