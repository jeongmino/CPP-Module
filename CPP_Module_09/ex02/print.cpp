/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:36:50 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 19:10:17 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::printDeque(void){
    DeqItor it = this->deque_.begin();
    for (; it != this->deque_.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printVector(void){
    VecItor it = this->vector_.begin();
    for (; it != this->vector_.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

static void printBefore(PmergeMe& pme){
    std::cout << "Before:  ";
    if (pme.getElement() <= 5){
        for (int i = 1; i <= pme.getElement(); i++){
            std::cout << pme.getArgv()[i]<< " ";
        }
        std::cout << std::endl;
    }
    else{
        for (int i = 1; i <= 4; i++){
            std::cout << pme.getArgv()[i]<< " ";
        }
        std::cout << "[...]" << std::endl;
    }
}

static void printAfter(PmergeMe& pme){
    std::cout << "After:  ";
    if (pme.getElement() <= 5){
        pme.printVector();
    }
    else{
        VecItor it = pme.getVector().begin();
        int i = 0;
        while (i++ < 4){
            std::cout << *it++ << " ";
        }
        std::cout << "[...]" << std::endl;
    }
}

void PmergeMe::printResult(void){
    printBefore(*this);
    printAfter(*this);
}