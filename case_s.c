/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <svikornv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:09:51 by svikornv          #+#    #+#             */
/*   Updated: 2023/03/20 17:34:16 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_s(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	return (ft_strlen(s));
}
