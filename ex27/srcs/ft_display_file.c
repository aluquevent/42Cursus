/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Xyz <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 22:01:45 by aluque-v          #+#    #+#             */
/*   Updated: 2024/12/21 17:32:27 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c);

int	ft_open(char *filename, int *filepos)
{
	*filepos = open(filename, O_RDONLY);
	if (*filepos >= 0)
		return (1);
	return (0);
}

void	ft_read(int filepos)
{
	char	c;

	c = '0';
	while (read(filepos, &c, sizeof(char)) == 1)
		ft_putchar(c);
	if (read(filepos, &c, sizeof(char)) == -1)
		write(2, "Cannot read file.\n", 18);
}

void	ft_close(int filepos)
{
	close(filepos);
}

int	ft_display_file(char *str)
{
	int	filepos;
	int	status;

	if (!str)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	filepos = 0;
	status = ft_open(str, &filepos);
	if (status)
	{
		ft_read(filepos);
		ft_close(filepos);
	}
	else
	{
		write(2, "Cannot read file.\n", 18);
	}
	return (status);
}
