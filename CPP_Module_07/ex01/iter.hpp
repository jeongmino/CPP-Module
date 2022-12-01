/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:15:52 by junoh             #+#    #+#             */
/*   Updated: 2022/12/01 11:16:49 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *a, size_t arrLen, void (*func)(const T &))
{
	for (size_t i = 0; i < arrLen; i++)
		func(a[i]);
}

#endif