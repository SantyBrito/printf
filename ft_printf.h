/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito-a <sbrito-a@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:12:33 by sbrito-a          #+#    #+#             */
/*   Updated: 2022/11/08 20:00:35 by sbrito-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	funct_str(char *c);
int	funct_ptr(unsigned long int n);
int	funct_dec(int n);
int	funct_unsigned_dec(unsigned int n);
int	funct_hex(unsigned int n, int flag);

#endif