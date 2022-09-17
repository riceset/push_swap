/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   improved_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:02:12 by tkomeno           #+#    #+#             */
/*   Updated: 2022/09/17 16:02:48 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	ft_isspace(char c)
{
	if (c == ' ' || ('\x09' <= c && c <= '\x0D'))
		return (true);
	return (false);
}

static char	*ft_skipspace(char *str)
{
	while (ft_isspace(*str))
		str++;
	return (str);
}

static char	*ft_sign_handling(char *str, int *sign)
{
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			*sign = -1;
			str++;
		}
	}
	return (str);
}

int	improved_atoi(char *str, bool *error)
{
	long long	res;
	int			sign;

	res = 0;
	sign = 1;
	str = ft_skipspace(str);
	str = ft_sign_handling(str, &sign);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		res = res * 10 + (*str - '0');
		if (res - (sign == -1) > INT_MAX)
			return (0);
		str++;
	}
	*error = false;
	return ((int)(res * sign));
}
