/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Probook <Probook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:10:31 by nmuminov          #+#    #+#             */
/*   Updated: 2023/08/21 12:00:34 by Probook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// void fail(char *str)
// {
//     printf("%s\n", str);
//     exit(1);
// }

int	ft_env(char **env, int argc)
{
	int i;

	if (argc == 1)
	    fail("error env");
	i = 0;
	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	exit(1);
}

// int main(int argc, char **argv, char **env)
// {
// 	(void)argv;
// 	ft_env(env, argc);
// 	return 0;
// }