/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albestae <albestae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:25:13 by albestae          #+#    #+#             */
/*   Updated: 2023/11/02 20:25:14 by albestae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	unsigned char	*tab;
	unsigned char	*t;

	tab = (unsigned char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tab == NULL)
		return (NULL);
	t = tab;
	while (*s != '\0')
		*tab++ = *s++;
	*tab = '\0';
	return ((char *)t);
}
