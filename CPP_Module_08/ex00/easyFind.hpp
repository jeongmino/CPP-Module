/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:28:44 by junoh             #+#    #+#             */
/*   Updated: 2022/12/03 20:02:59 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
    public :
        const char* what() const throw(){
            return ("Argument is not found");
        }
};

template <typename T>
int easyfind(std::vector<T> & vector , T arg)
{
	typename std::vector<T>::iterator findIt; // specify which iterator we'll use
	findIt = std::find(vector.begin(), vector.end(), arg);
	if (findIt == vector.end())
		throw(NotFoundException());
	return (findIt - vector.begin());
}

#endif