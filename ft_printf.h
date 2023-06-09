/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svikornv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:50:21 by svikornv          #+#    #+#             */
/*   Updated: 2023/03/26 15:13:17 by svikornv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int		case_c(char c);
int		case_i(int n);
int		case_u(unsigned int n);
int		case_d(int n);
int		case_s(const char *s);
int		case_p(unsigned long p);
int		case_x(unsigned long p);
int		case_ex(unsigned long p);
int		ft_printf(const char *format, ...);

#endif
