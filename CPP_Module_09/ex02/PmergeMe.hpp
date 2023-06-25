/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 01:07:29 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 16:16:57 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <ctime>

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
};

void printError(std::string reason);

#endif