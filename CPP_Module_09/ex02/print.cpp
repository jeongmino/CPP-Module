/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:36:50 by junoh             #+#    #+#             */
/*   Updated: 2023/06/25 18:38:33 by junoh            ###   ########.fr       */
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