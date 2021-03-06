/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmjaku <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 12:34:48 by kmjaku            #+#    #+#             */
/*   Updated: 2016/05/02 12:37:31 by kmjaku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (c == s[i])
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}
