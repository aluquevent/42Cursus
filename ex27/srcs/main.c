/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 22:08:09 by aluque-v          #+#    #+#             */
/*   Updated: 2024/12/21 17:38:52 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_display_file(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		return (ft_display_file(argv[1]));
	}
	if (argc < 2)
		ft_putstr("File name missing.");
	if (argc > 2)
		ft_putstr("Too many arguments.");
	return (1);
}
