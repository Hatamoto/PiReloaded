/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburakow <mburakow@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:53:26 by mburakow          #+#    #+#             */
/*   Updated: 2023/10/15 00:37:15 by mburakow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_args(int argc, char **argv)
{
	int		step;
	int		i;
	char	*temp;

	step = 0;
	i = 1;
	while (step < argc - 1)
	{
		while (i < argc - step - 1)
		{
			while (*argv[i] && *argv[i + 1] && *argv[i] == *argv[i + 1])
			{
				argv[i]++;
				argv[i + 1]++;
			}
			if (*argv[i] > *argv[i + 1])
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		i = 1;
		step++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_args(argc, argv);
	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar('\n');
		i++;
	}
}
