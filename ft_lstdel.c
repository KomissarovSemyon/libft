/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semenkomissarov <semenkomissarov@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:46:00 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/05 13:52:00 by semenkomiss      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*now;
	t_list	*tmp;

	if (!alst || !(*alst) || !del)
		return ;
	now = *alst;
	while (now)
	{
		tmp = now->next;
		ft_lstdelone(&now, del);
		now = tmp;
	}
	*alst = NULL;
}
