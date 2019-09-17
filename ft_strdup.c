/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:17:05 by kgavrilo          #+#    #+#             */
/*   Updated: 2019/09/17 15:33:18 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len * sizeof(char));
	if (s2 == NULL)
		return NULL;
	while (len > 0)
	{
		s2[len - 1] = s1[len - 1];
		len--;
	}
	return (s2);
}