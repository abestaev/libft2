/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albestae <albestae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:12:28 by albestae          #+#    #+#             */
/*   Updated: 2023/11/06 10:06:44 by albestae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tmp;
	size_t	i;

	size *= nmemb;
	tmp = (void *)malloc(size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
