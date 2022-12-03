/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:31:58 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 16:56:57 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

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