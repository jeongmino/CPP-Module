/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:07:33 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 16:16:56 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int element, char **argv): element_(element), argv_(argv){
    this->vectorTimerStart_ = 0;
    this->vectorTimerEnd_ = 0;
    this->dequeTimerStart_ = 0;
    this->dequeTimerEnd_ = 0;
}

PmergeMe::PmergeMe(const PmergeMe& copy){
    *this = copy;
}
    
PmergeMe& PmergeMe::operator=(const PmergeMe& src){
    if (this != &src){
        this->deque_ = src.deque_;
        this->vector_ = src.vector_;
    }
    return *this;
}

PmergeMe::~PmergeMe(){}

void printError(std::string reason){
    if (reason.compare("Arguments") == 0){
        std::cout << "wrong number of arguments" << std::endl;
    }
}

void PmergeMe::setDeque(void){
    int num;
    char **argv = this->argv_;
    int argc = this->element_ + 1;
    
    for (int i = 1; i < argc; i++){
        num = std::atoi(argv[i]);
        this->deque_.push_back(num);
    }
    return ;
}

void PmergeMe::setVector(void){
    int num;
    char **argv = this->argv_;
    int argc = this->element_ + 1;

    for (int i = 1; i < argc + 1; i++){
        num = std::atoi(argv[i]);
        this->vector_.push_back(num);
    }
    return ;    
}

void PmergeMe::printDeque(void){
    std::deque<int>::iterator it = this->deque_.begin();
    for (; it != this->deque_.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printVector(void){
    std::vector<int>::iterator it = this->vector_.begin();
    for (; it != this->vector_.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::sortVector(void){
    this->vectorTimerStart_ = std::clock();
    setVector();

}

void PmergeMe::sortDeque(void){
    this->dequeTimerStart_ = std::clock();
    setDeque();
} 