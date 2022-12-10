/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderouba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:10:21 by aderouba          #+#    #+#             */
/*   Updated: 2022/12/10 13:28:47 by aderouba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 5 && argc != 6)
	{
		write(2, "Usage : ./philo number_of_philosophers", 38);
		write(2, " time_to_die time_to_eat time_to_sleep", 38);
		write(2, "[number_of_times_each_philosopher_must_eat]\n", 44);
	}
	return (0);
}
