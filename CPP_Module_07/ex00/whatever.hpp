/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:31:58 by junoh             #+#    #+#             */
/*   Updated: 2022/12/01 01:05:06 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

// template<typename T>
// void swap(T &a, T &b)
// {
//     T temp = a;
//     std::cout << temp << std::endl;
//     a = b;
//     std::cout << a << " " << b << std::endl;
//     b = temp;
//     std::cout << b << std::endl;
// }

// template <typename T>
// void	swap(T & num1, T & num2)
// {
// 	T	tmp;

// 	tmp = num1;
// 	num1 = num2;
// 	num2 = tmp;
// }

// template<typename T>
// void swap(T *a, T *b)
// {
//     T temp = *a;
//     a = b;
//     b = temp;
// }

template <typename T>
void swap(T& n1, T& n2)
{
	T tmp = n1;
	n1 = n2;
	n2 = tmp;
}

template<typename T>
T max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

template<typename T>
T min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}

#endif
