/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_aff_z.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:01:58 by marvin            #+#    #+#             */
/*   Updated: 2022/08/25 11:01:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	write(1, "z", 1);
	write(1, "\n", 1);
}
