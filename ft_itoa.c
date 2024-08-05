/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrome <marcrome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:55:11 by marcrome          #+#    #+#             */
/*   Updated: 2024/05/09 08:43:16 by marcrome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int n)
{
	unsigned int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length += 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	length;
	long			n2;

	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	n2 = n;
	if (string == NULL)
		return (NULL);
	if (n2 < 0)
	{
		string[0] = '-';
		n2 = -n2;
	}
	if (n2 == 0)
		string[0] = '0';
	string[length] = '\0';
	while (n2 != 0)
	{
		string[length - 1] = (n2 % 10) + '0';
		n2 = n2 / 10;
		length--;
	}
	return (string);
}
