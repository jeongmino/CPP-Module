/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:59:08 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 18:56:43 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


int main(int argc, char *argv[])
{
    if (argc < 2){
        printError("Argument");
        return 1;
    }

    PmergeMe pme(argc - 1, argv);

    pme.sortVector();
    pme.sortDeque();
    pme.printResult();
    
}