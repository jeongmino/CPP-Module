/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 00:43:05 by junoh             #+#    #+#             */
/*   Updated: 2022/11/20 00:44:26 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private :
        std::string ideas_[100];
    public :
        Brain(void);
        Brain(const Brain& copy);
        Brain& operator=(const Brain& other);
        ~Brain();
};

#endif 