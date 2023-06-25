/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:07:33 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 18:29:59 by junoh            ###   ########.fr       */
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

    for (int i = 1; i < argc; i++){
        num = std::atoi(argv[i]);
        this->vector_.push_back(num);
    }
    return ;    
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

void PmergeMe::merge(VecItor begin, VecItor middle, VecItor end) {
    std::vector<int> temp(end - begin);
    VecItor a = begin, b = middle, c = temp.begin();
    while (a != middle && b != end) {
        if (*a <= *b) {
            *c++ = *a++;
        } else {
            *c++ = *b++;
        }
    }
    std::copy(a, middle, c);
    std::copy(b, end, c);
    std::copy(temp.begin(), temp.end(), begin);
}


void PmergeMe::mergeSort(VecItor begin, VecItor end) {
    if (end - begin > 1) {
        VecItor middle = begin + (end - begin) / 2;
        mergeSort(begin, middle);
        mergeSort(middle, end);
        merge(begin, middle, end);
    }
}

void PmergeMe::merge(DeqItor begin, DeqItor middle, DeqItor end) {
    std::deque<int> temp;
    DeqItor a = begin, b = middle;
    while (a != middle && b != end) {
        if (*a <= *b) {
            temp.push_back(*a++);
        } else {
            temp.push_back(*b++);
        }
    }
    while (a != middle) {
        temp.push_back(*a++);
    }
    while (b != end) {
        temp.push_back(*b++);
    }
    for (a = begin; a != end; ++a) {
        *a = temp[a - begin];
    }
}

void PmergeMe::mergeSort(DeqItor begin, DeqItor end) {
    if (end - begin > 1) {
        DeqItor middle = begin + (end - begin) / 2;
        mergeSort(begin, middle);
        mergeSort(middle, end);
        merge(begin, middle, end);
    }
}

void PmergeMe::checkOrder(void){
    VecItor it_v;
    VecItor it_v_tmp;
    DeqItor it_d;
    DeqItor it_d_tmp;
    int sign = 0;
    for (it_v = this->vector_.begin(); it_v != this->vector_.end(); it_v++){
        it_v_tmp= it_v;
        it_v_tmp++;
        if (*it_v > *it_v_tmp && it_v_tmp != this->vector_.end()){
            std::cout << *it_v << " > " << *it_v_tmp << std::endl;
            sign = 1;
        }
    }
    if (!sign){
        std::cout << "vector success" << std::endl;
    }
    sign = 0;
    for (it_d = this->deque_.begin(); it_d != this->deque_.end(); it_d++){
        it_d_tmp = it_d;
        it_d_tmp++;
        if (*it_d > *it_d_tmp && it_d_tmp != this->deque_.end()){
            std::cout << *it_d << " > " << *it_d_tmp << std::endl;
            sign = 1;
        }
    }
    if (!sign){
        std::cout << "vector success" << std::endl;
    }
}