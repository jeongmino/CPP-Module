/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junoh <junoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 01:58:58 by junoh             #+#    #+#             */
/*   Updated: 2022/11/11 02:13:30 by junoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl{

    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void exception(void);
        
    public :
        void complain(std::string level);
};

#endif