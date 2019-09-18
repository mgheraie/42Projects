/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 00:38:10 by mgheraie          #+#    #+#             */
/*   Updated: 2019/04/04 00:38:11 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nbrlen(long long n)
{
	int l;

	l = (n <= 0);
	while (n != 0)
	{
		n /= 10;
		++l;
	}
	return (l);
}

int		unbrlen(unsigned long long n)
{
	int l;

	l = (n <= 0);
	while (n != 0)
	{
		n /= 10;
		++l;
	}
	return (l);
}
