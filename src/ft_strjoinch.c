/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semyonkomissarov <semyonkomissarov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 21:17:54 by amerlon-          #+#    #+#             */
/*   Updated: 2019/02/13 11:38:43 by semyonkomis      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinch(char **str, char c, int flag)
{
	char	*res;

	if (!str || !(*str))
		return (NULL);
	res = ft_strnew(ft_strlen(*str) + 1);
	if (!res)
		return (NULL);
	res = ft_strcpy(res, *str);
	res = ft_strncat(res, &c, 1);
	if (flag)
		ft_strdel(str);
	return (res);
}
