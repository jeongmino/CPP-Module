/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:07:29 by junoh             #+#    #+#             */
/*   Updated: 2023/06/29 19:59:12 by junoh            ###   ########.fr       */
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
        void merge(VecItor begin, VecItor middle, VecItor end);
        void merge(DeqItor begin, DeqItor middle, DeqItor end);
        void mergeSort(DeqItor begin, DeqItor end);
        void mergeSort(VecItor begin, VecItor end);
        void checkOrder(void);
        void printResult(void);
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