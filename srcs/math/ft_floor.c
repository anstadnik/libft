/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 20:13:31 by astadnik          #+#    #+#             */
/*   Updated: 2018/03/02 20:15:29 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_floor(long double n)
{
	if ((long long)n <= n)
		return ((long long)n);
	else
		return ((long long)n - 1);
}
