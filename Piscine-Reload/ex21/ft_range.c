/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:05:41 by aluque-v          #+#    #+#             */
/*   Updated: 2024/12/19 11:19:50 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	i;
	int		*array;

	if (min >= max)
		return (NULL);
	i = max - min;
	array = (int *)malloc(sizeof(int) * i);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
