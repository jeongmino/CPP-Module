/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:07:33 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 19:48:08 by junoh            ###   ########.fr       */
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

void PmergeMe::setDeque(void){
    int num;
    char **argv = this->argv_;
    int argc = this->element_ + 1;
    
    for (int i = 1; i < argc; i++){
        num = std::atoi(argv[i]);
        if (num < 0){
            printError("Negative", num);
            exit(1);
        }
        this->deque_.push_back(num);
    }
    return ;
}

void PmergeMe::setVector(void){
    int num;
    char **argv = this->argv_;
    int argc = this->element_ + 1;

    for (int i = 1; i < argc; i++){
        num = std::atoi(argv[i]);
        if (num < 0){
            printError("Negative", num);
            exit(1);
        }
        this->vector_.push_back(num);
    }
    return ;    
}

void PmergeMe::sortVector(void){
    this->vectorTimerStart_ = std::clock();
    setVector();
    mergeSort(this->vector_.begin(), this->vector_.end());
    this->vectorTimerEnd_ = std::clock();
    // printVector();
}

void PmergeMe::sortDeque(void){
    this->dequeTimerStart_ = std::clock();
    setDeque();
    mergeSort(this->deque_.begin(), this->deque_.end());
    this->dequeTimerEnd_ = std::clock();
    // printDeque();
} 

std::vector<int>& PmergeMe::getVector(void){
    return this->vector_;
}

int PmergeMe::getElement(void){
    return this->element_;
}

char** PmergeMe::getArgv(void){
    return this->argv_;
}
std::clock_t PmergeMe::getVectorTimerStart(void){
    return this->vectorTimerStart_;
}

std::clock_t PmergeMe::getVectorTimerEnd(void){
    return this->vectorTimerEnd_;
}

std::clock_t PmergeMe::getDequeTimerStart(void){
    return this->dequeTimerStart_;
}

std::clock_t PmergeMe::getDequeTimerEnd(void){
    return this->dequeTimerEnd_;
}