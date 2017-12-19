/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siosif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 19:14:54 by siosif            #+#    #+#             */
/*   Updated: 2017/12/19 16:44:05 by siosif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *s1iter;

	s1iter = s1;
	while (*s1iter != '\0')
		s1iter++;
	while (*s2 != '\0')
		*s1iter++ = *s2++;
	*s1iter = '\0';
	return (s1);
}