/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:07:29 by junoh             #+#    #+#             */
/*   Updated: 2023/07/11 15:05:59 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <algorithm>
#include <iterator>
#include <ctime>

#define SIZE 3

typedef std::vector<int>::iterator VecItor;
typedef std::deque<int>::iterator DeqItor;

class PmergeMe{
    private :
        std::deque<int> deque_;
        std::vector<int> vector_;
        int element_;
        char **argv_;
        std::clock_t vectorTimerStart_;
        std::clock_t dequeTimerStart_;
        std::clock_t vectorTimerEnd_;
        std::clock_t dequeTimerEnd_;
    
    public :
        PmergeMe(void);
        PmergeMe(int element, char **argv);
        PmergeMe(const PmergeMe& copy);
        PmergeMe& operator=(const PmergeMe& src);
        ~PmergeMe();
    
    public :
        void sortDeque(void);
        void sortVector(void);
        void setDeque(void);
        void setVector(void);
        void printDeque(void);
        void printVector(void);
        void checkOrder(void);
        void printResult(void);
        void mergeInsertSortDeque(int left, int right);
        void mergeInsertSortVector(int left, int right);
        void mergeSortDeque(int left, int mid, int right);
        void mergeSortVector(int left, int mid, int right);
        std::vector<int>& getVector(void);
        int getElement(void);
        char** getArgv(void);
        std::clock_t getVectorTimerStart(void);
        std::clock_t getVectorTimerEnd(void);
        std::clock_t getDequeTimerStart(void);
        std::clock_t getDequeTimerEnd(void);
        void mergeSortVector(std::vector<int>& vector);

};

void printError(std::string reason, int num);

#endif