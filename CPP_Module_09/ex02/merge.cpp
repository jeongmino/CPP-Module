/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:37:59 by junoh             #+#    #+#             */
/*   Updated: 2023/07/11 15:04:03 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static void insertionSort(std::vector<int> &vector, int left, int right){
    for (int i = left + 1; i <= right; i++){
        int tmp = vector[i];
        int j = i - 1;
        while (j >= left && vector[j] > tmp){
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = tmp;
    }
}


static void insertionSort(std::deque<int> &deque, int left, int right){
    for (int i = left + 1; i <= right; i++){
        int tmp = deque[i];
        int j = i - 1;
        while (j >= left && deque[j] > tmp){
            deque[j + 1] = deque[j];
            j--;
        }
        deque[j + 1] = tmp;
    }
}


void PmergeMe::mergeInsertSortDeque(int left, int right){
    if (left >= right){
        return ;
    }
    if (right - left + 1 <= SIZE){
        insertionSort(this->deque_, left, right);
        return ;
    }
    int mid = (left + right) / 2;
    mergeInsertSortDeque(left, mid);
    mergeInsertSortDeque(mid + 1, right);
    mergeSortDeque(left, mid, right);
}

void PmergeMe::mergeInsertSortVector(int left, int right){
    if (left >= right){
        return ;
    }
    if (right - left + 1 <= SIZE){
        insertionSort(this->vector_, left, right);
        return ;
    }
    int mid = (left + right) / 2;
    mergeInsertSortVector(left, mid);
    mergeInsertSortVector(mid + 1, right);
    mergeSortVector(left, mid, right);
}

void PmergeMe::mergeSortDeque(int left, int mid, int right){
    std::deque<int> &deq = this->deque_;
	std::deque<int> tmp(right - left + 1);
	int i = left;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= right)
	{
		if (deq[i] <= deq[j])
			tmp[k++] = deq[i++];
		else
			tmp[k++] = deq[j++];
	}
	while (i <= mid)
		tmp[k++] = deq[i++];
	while (j <= right)
		tmp[k++] = deq[j++];
	for (i = left; i <= right; i++)
		deq[i] = tmp[i - left];
}

void PmergeMe::mergeSortVector(int left, int mid, int right){
    std::vector<int> &vec = this->vector_;
    std::vector<int> tmp(right - left + 1);
    int i = left;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= right)
	{
		if (vec[i] <= vec[j])
			tmp[k++] = vec[i++];
		else
			tmp[k++] = vec[j++];
	}
	while (i <= mid)
		tmp[k++] = vec[i++];
	while (j <= right)
		tmp[k++] = vec[j++];
	for (i = left; i <= right; i++)
		vec[i] = tmp[i - left];
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
        std::cout << "deque success" << std::endl;
    }
}