/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Probook <Probook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:10:31 by nmuminov          #+#    #+#             */
/*   Updated: 2023/08/21 12:00:24 by Probook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// void fail(char *str)
// {
//     printf("%s\n", str);
//     exit(1);
// }

void    ft_cd(int argc, char **argv)
{   
    if (argc < 3)
        fail("not enough arg");
	else if (argc == 3) // out cd dir
    {
        if (access(argv[2], F_OK) == -1) //double verification je crois lol
            fail("dir does not exist");
        else if (chdir(argv[2]) == -1) 
            fail("failed to change dir"); //utiliser ernno pour la nature de l'erreur ?
    }
	else if (argc > 3)
        fail("too many args");
}

// int main(int argc, char **argv)
// {
//     ft_cd(argc, argv);
//     return 0;
// }