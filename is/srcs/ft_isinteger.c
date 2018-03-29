/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 17:22:41 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/29 17:45:45 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinteger(const char	*s)
{
	char	neg;
	int	counter;

	neg = 0;
	while (ft_iswhitespace(*s))
		s++;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			neg = 1;
	while (*s == '0')
		s++;
	counter = 0;
	while (ft_isdigit(s[counter]))
		if (counter > 9)
			return (-1);
		else
			counter++;
	if (counter == 10 && (neg ? ft_strncmp(s, "2147483648", 10) : ft_strncmp(s, "2147483647", 10)) > 0)
		return (-1);
	return (neg);

}
