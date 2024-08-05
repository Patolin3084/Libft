/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrome <marcrome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:04:22 by marcrome          #+#    #+#             */
/*   Updated: 2024/05/09 08:46:39 by marcrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*p;

	p = (char *)ptr;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (ptr);
}
