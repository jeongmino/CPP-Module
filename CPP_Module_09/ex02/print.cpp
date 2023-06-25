/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:36:50 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 19:47:39 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void printError(std::string reason, int num){
    if (reason.compare("Arguments") == 0){
        std::cout << "wrong number of arguments" << std::endl;
    }
    else if (reason.compare("Negative") == 0){
        std::cout << "Negative number: " << num << std::endl;
    }
}

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

static void printSortResult(PmergeMe& pme){
    double vectorTime = static_cast<double>(pme.getVectorTimerEnd() - pme.getVectorTimerStart()) / CLOCKS_PER_SEC;
    double DequeTime = static_cast<double>(pme.getDequeTimerEnd() - pme.getDequeTimerStart()) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << pme.getElement() <<
    " elements with std::vector : " <<  vectorTime << " us" << std::endl;
    std::cout << "Time to process a range of " << pme.getElement() <<
    " elements with std::deque : " <<  DequeTime << " us" << std::endl;
}

void PmergeMe::printResult(void){
    printBefore(*this);
    printAfter(*this);
    printSortResult(*this);
}