/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderouba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:10:39 by aderouba          #+#    #+#             */
/*   Updated: 2022/12/10 13:32:26 by aderouba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <pthread.h>
# include <time.h>

typedef struct s_param
{
	int	nb_philo;
	int	time_die;
	int	time_eat;
	int	time_sleep;
	int	number_meal;
}	t_param;

#endif
