/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrome <marcrome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:10:41 by marcrome          #+#    #+#             */
/*   Updated: 2024/05/09 08:49:54 by marcrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	while (*s1 != '\0' && *s1 == *s2 && num > 0)
	{
		s1++;
		s2++;
		num--;
	}
	if (num == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
