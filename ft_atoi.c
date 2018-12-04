/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:39:30 by amerlon-          #+#    #+#             */
/*   Updated: 2018/11/29 20:48:35 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long int	res;
	long long int	prev;
	int				sign;
	int				i;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+')
		sign = 1;
	str[i] == '+' || str[i] == '-' ? i++ : (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		prev = res;
		res = res * 10 + str[i] - '0';
		if ((prev > 0 && res < 0) || (prev < 0 && res > 0))
			return (sign > 0 ? -1 : 0);
		i++;
	}
	return (sign * res);
}
